#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bSend_clicked();
    void refreshGuiData();

    void on_textSend_returnPressed();

private:
    Ui::MainWindow *ui;
    QTimer *t;
    QTcpSocket *socket;
    bool waitForInput, inputDataReady, inputSended;
};
#endif
