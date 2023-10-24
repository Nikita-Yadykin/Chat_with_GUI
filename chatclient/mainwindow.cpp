#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QObject>
#include <QTcpSocket>
#include <QTimer>

#define MESSAGE_LENGTH 1024 // Максимальный размер буфера для данных
#define PORT 7777 // Будем использовать этот номер порта

QTcpSocket *socket;
char message[MESSAGE_LENGTH];

#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    socket = new QTcpSocket();
    socket->connectToHost("127.0.0.1", PORT);

    if(!socket->waitForConnected(3000))
    {
        QMessageBox msgBox;
        msgBox.setText("Connection with the server failed!");
        msgBox.exec();
        exit(0);
    }

    waitForInput = false; inputDataReady = false; inputSended = true;

    QTimer *t = new QTimer(this);
    t->setInterval(100);
    connect(t, SIGNAL(timeout()), this, SLOT(refreshGuiData()));
    t->start();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete socket;
    //delete t;
}

void MainWindow::refreshGuiData(){
    if(waitForInput || !inputSended){
        if(inputDataReady){
            socket->write(&message[0], MESSAGE_LENGTH);
            inputSended = true;
        }
    }else{
        bzero(message, sizeof(message));
        socket->read(&message[0], MESSAGE_LENGTH);
        if(strncmp(message, "CDATA-CIN>>", 11)==0){
            bzero(message, sizeof(message));
            waitForInput = true; inputDataReady = false; inputSended = false;
            //ui->textSend->clear();
        }
        else if(strncmp(message, "CDATA:CMD:EXIT", 14)==0){
            QApplication::quit();
        }
        else {
            ui->textChat->append(QString(message));
        }
    }
}

void MainWindow::on_bSend_clicked()
{
    if(waitForInput){
        std::string s1 = ui->textSend->text().toStdString();
        bzero(message, sizeof(message));
        memcpy(&message[0], s1.c_str(), s1.length());
        waitForInput = false;
        inputDataReady = true;
    }
    ui->textSend->clear();
}


void MainWindow::on_textSend_returnPressed()
{
    on_bSend_clicked();
}

