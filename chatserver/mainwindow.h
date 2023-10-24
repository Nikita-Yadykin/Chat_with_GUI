#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void on_pButtonRefreshUsers_clicked();

    void on_pButtonRefreshMessages_clicked();

    void on_bDisableUser_clicked();

    void on_bBanUser_clicked();

    void on_bActivateUser_clicked();

private:
    Ui::MainWindow *ui;

    void loadMessages();
    void loadClients();
};
#endif
