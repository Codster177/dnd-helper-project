#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "basedie.h"
#include "wildmagic.h"
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

    void clearSummary();

    void on_pushButton_clearList_clicked();

    void on_pushButton_rollDice_clicked();

    void on_pushButton_clearSummary_clicked();

    void on_pushButton_4_clicked();

    void on_pushButtonWMClear_clicked();

    void on_radioButton_3_toggled(bool checked);

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_radioButton_toggled(bool checked);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<baseDie> dieList;
    wildmagic wildmagicRoller;
    bool timeframe = false, sideEffects = true;
    int rollModifier;

};
#endif // MAINWINDOW_H
