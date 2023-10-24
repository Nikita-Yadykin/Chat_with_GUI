#include "mainwindow.h"
#include "clientssqltablemodel.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    loadMessages();
    loadClients();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadMessages(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("chatdb");
    db.setUserName("root");
    db.setPassword("password");
    bool ok = db.open();
    if(ok){
        QSqlQuery query(db);
        query.exec("select m.id, m.letter, m.create_time, u1.name as sendername, u2.name as recepientname from table_messages m left join table_users u1 on m.sender_id = u1.id left join table_users u2 on m.recepient_id = u2.id order by m.create_time desc");
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);
        ui->tableViewMessages->setModel(model);
        ui->tableViewMessages->update();
    }
    db.close();
}

void MainWindow::loadClients(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("chatdb");
    db.setUserName("root");
    db.setPassword("password");
    bool ok = db.open();
    if(ok){
        QSqlQuery query(db);
        query.exec("SELECT id, name, login, status FROM table_users order by name asc");
        ClientsSqlTableModel *model = new ClientsSqlTableModel();
        model->setQuery(query);
        ui->tableViewClients->setModel(model);
        ui->tableViewClients->update();
    }
    db.close();
}

void MainWindow::on_pButtonRefreshUsers_clicked()
{
    loadClients();
}


void MainWindow::on_pButtonRefreshMessages_clicked()
{
    loadMessages();
}


void MainWindow::on_bDisableUser_clicked()
{
    QModelIndexList selection = ui->tableViewClients->selectionModel()->selectedRows();
    if (selection.isEmpty()) {
        // Если пользователь не выбран ничего не делаем.
        return;
    }
    QModelIndex index = selection.at(0);
    QVariant v= index.data();
    int clientid = v.toInt();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("chatdb");
    db.setUserName("root");
    db.setPassword("password");
    bool ok = db.open();
    if(ok){
        db.transaction();
        QSqlQuery query(db);
        query.exec("UPDATE table_users SET status = 1 WHERE id = " + QString::number(clientid));
        db.commit();
    }
    db.close();

    loadClients();
}


void MainWindow::on_bBanUser_clicked()
{
    QModelIndexList selection = ui->tableViewClients->selectionModel()->selectedRows();
    if (selection.isEmpty()) {
        // Если пользователь не выбран ничего не делаем.
        return;
    }
    QModelIndex index = selection.at(0);
    QVariant v= index.data();
    int clientid = v.toInt();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("chatdb");
    db.setUserName("root");
    db.setPassword("password");
    bool ok = db.open();
    if(ok){
        db.transaction();
        QSqlQuery query(db);
        query.exec("UPDATE table_users SET status = 2 WHERE id = " + QString::number(clientid));
        db.commit();
    }
    db.close();

    loadClients();
}


void MainWindow::on_bActivateUser_clicked()
{
    QModelIndexList selection = ui->tableViewClients->selectionModel()->selectedRows();
    if (selection.isEmpty()) {
        // Если пользователь не выбран ничего не делаем.
        return;
    }
    QModelIndex index = selection.at(0);
    QVariant v= index.data();
    int clientid = v.toInt();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("chatdb");
    db.setUserName("root");
    db.setPassword("password");
    bool ok = db.open();
    if(ok){
        db.transaction();
        QSqlQuery query(db);
        query.exec("UPDATE table_users SET status = 0 WHERE id = " + QString::number(clientid));
        db.commit();
    }
    db.close();

    loadClients();
}

