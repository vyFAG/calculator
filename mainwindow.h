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
    void do_last_action(QString new_action);
    
private slots:
    void on_add_0_clicked();
    void on_add_1_clicked();
    void on_add_2_clicked();
    void on_add_3_clicked();
    void on_add_4_clicked();
    void on_add_5_clicked();
    void on_add_6_clicked();
    void on_add_7_clicked();
    void on_add_8_clicked();
    void on_add_9_clicked();
    
    void on_remove_all_clicked();
    
    void on_addition_clicked();
    void on_subtraction_clicked();
    
    void on_multiplication_clicked();
    
    void on_division_clicked();
    
    void on_equals_clicked();
    
private:
    Ui::MainWindow *ui;
    QString current_string = "";
    bool first_action = 1;
    
    double storable_variable = 0;
    
    QString last_action = "";
};
#endif // MAINWINDOW_H
