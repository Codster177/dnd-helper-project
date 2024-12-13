#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <cstdlib>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    wildmagicRoller.loadList("wildmagiclist.txt");
    wildmagicRoller.loadList("randompotionlist.txt");

    rollModifier = 0;

    ui->setupUi(this);

    ui->listWidget_summary->addItem("Die rolls will appear here.");
    ui->wildMagicTableList->addItem("Wild magic rolls will appear here:");
    ui->rPotionTableList->addItem("Random potions will appear here:");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addDie(baseDie dieToAdd)
{
    if (dieToAdd.getAmount() != -1 && dieToAdd.getDieNum() != -1)
    {
        dieList.push_back((dieToAdd));
        ui->listWidget_dieList->addItem(QString::number(dieToAdd.getAmount()) + QString("D") + QString::number(dieToAdd.getDieNum()));
    }
}

void MainWindow::clearDieList()
{
    dieList.clear();
    ui->listWidget_dieList->clear();
    ui->label_dieResult->clear();
}

void MainWindow::clearSummary()
{
    ui->listWidget_summary->clear();
    ui->listWidget_summary->addItem("Die rolls will appear here.");
}

void MainWindow::rollDice()
{
    int total = 0;
    QString afterSummary = "";

    if (dieList.empty())
    {
        return;
    }


    for (int i = 0; i < dieList.size(); i++)
    {
        total += dieList[i].rollDie();
        for (int j = 0; j < dieList[i].getLastRolls().size(); j++)
        {
            if (i == 0 && j == 0)
            {
                afterSummary = QString::number(dieList[i].getLastRolls()[j]);
            }
            else
            {
                afterSummary += QString(" + ") + QString::number(dieList[i].getLastRolls()[j]);
            }
        }
    }
    if (rollModifier != 0)
    {
        afterSummary += QString(" + (") + QString::number(rollModifier) + QString(")");
    }
    total += rollModifier;
    ui->label_dieResult->setText(QString::number(total));
    QString summary = QString::number(total) + QString(" = ") + afterSummary;
    ui->listWidget_summary->addItem(summary);
    //clearDieList();
}

void MainWindow::on_pushButton_D4_2_clicked()
{
    if (ui->lineEdit_d4->text() == "")
    {
        return;
    }
    int amount = ui->lineEdit_d4->text().toInt();
    addDie(baseDie(amount, 4));
}

void MainWindow::on_pushButton_D6_2_clicked()
{
    if (ui->lineEdit_d6->text() == "")
    {
        return;
    }
    int amount = ui->lineEdit_d6->text().toInt();
    addDie(baseDie(amount, 6));
}


void MainWindow::on_pushButton_D8_2_clicked()
{
    if (ui->lineEdit_d8->text() == "")
    {
        return;
    }
    int amount = ui->lineEdit_d8->text().toInt();
    addDie(baseDie(amount, 8));
}


void MainWindow::on_pushButton_D10_2_clicked()
{
    if (ui->lineEdit_d10->text() == "")
    {
        return;
    }
    int amount = ui->lineEdit_d10->text().toInt();
    addDie(baseDie(amount, 10));
}


void MainWindow::on_pushButton_D12_2_clicked()
{
    if (ui->lineEdit_d12->text() == "")
    {
        return;
    }
    int amount = ui->lineEdit_d12->text().toInt();
    addDie(baseDie(amount, 12));
}


void MainWindow::on_pushButton_D20_2_clicked()
{
    if (ui->lineEdit_d20->text() == "")
    {
        return;
    }
    int amount = ui->lineEdit_d20->text().toInt();
    addDie(baseDie(amount, 20));
}


void MainWindow::on_pushButton_D100_2_clicked()
{
    if (ui->lineEdit_d100->text() == "")
    {
        return;
    }
    int amount = ui->lineEdit_d100->text().toInt();
    addDie(baseDie(amount, 100));
}


void MainWindow::on_pushButton_2_clicked()
{
    if (ui->lineEdit_dBlankA->text() == "" || ui->lineEdit_dBlankNum->text() == "")
    {
        return;
    }
    int amount = ui->lineEdit_dBlankA->text().toInt();
    int dieNum = ui->lineEdit_dBlankNum->text().toInt();
    addDie(baseDie(amount, dieNum));
}



void MainWindow::on_pushButton_clearList_clicked()
{
    clearDieList();
}



void MainWindow::on_pushButton_rollDice_clicked()
{
    rollDice();
}


void MainWindow::on_pushButton_clearSummary_clicked()
{
    clearSummary();
}


void MainWindow::on_pushButton_4_clicked() // WildMagic Generate Button
{
    std::vector<QString> wildMagicRoll = wildmagicRoller.rollDieWM(timeframe);
    QListWidgetItem* newItem = new QListWidgetItem(wildMagicRoll[0], nullptr, 0);
    newItem->setToolTip(wildMagicRoll[1]);
    ui->wildMagicTableList->addItem(newItem);
}


void MainWindow::on_pushButtonWMClear_clicked()
{
    ui->wildMagicTableList->clear();
    ui->wildMagicTableList->addItem("Wild magic rolls will appear here:");
}


void MainWindow::on_radioButton_3_toggled(bool checked) // Timeframe perameter
{
    timeframe = checked;
}


void MainWindow::on_pushButton_5_clicked() // Potion Generate Button
{
    std::vector<QString> wildMagicRoll = wildmagicRoller.rollDiePotion(sideEffects);
    QListWidgetItem* newItem = new QListWidgetItem(wildMagicRoll[0], nullptr, 0);
    newItem->setToolTip(wildMagicRoll[1]);
    ui->rPotionTableList->addItem(newItem);
}

void MainWindow::on_pushButton_clicked()
{
    ui->rPotionTableList->clear();
    ui->rPotionTableList->addItem("Random potions will appear here:");
}


void MainWindow::on_radioButton_toggled(bool checked) // Side Effect Button
{
    sideEffects = !checked;
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    rollModifier = arg1;
}


void MainWindow::on_pushButton_3_clicked() // Zero out modifier
{
    ui->spinBox->setValue(0);
    rollModifier = 0;
}

