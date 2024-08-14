#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "basedie.h"
#include <Vector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_D4_2_clicked();

    void on_pushButton_D6_2_clicked();

    void on_pushButton_D8_2_clicked();

    void on_pushButton_D10_2_clicked();

    void on_pushButton_D12_2_clicked();

    void on_pushButton_D20_2_clicked();

    void on_pushButton_D100_2_clicked();

    void on_pushButton_2_clicked();

    void addDie(baseDie dieToAdd);

    void clearDieList();

    void rollDice();

    void on_pushButton_clearList_clicked();

    void on_pushButton_rollDice_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<baseDie> dieList;

};
#endif // MAINWINDOW_H
