#include "wildmagic.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QApplication>
#include <QRandomGenerator>


wildmagic::wildmagic() {}

void wildmagic::loadList(QString filename)
{
    qInfo() << "Application Path: " << qApp->applicationDirPath();
    QFile tableFile(qApp->applicationDirPath() + QString("/") + filename);

    if(!tableFile.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", tableFile.errorString());
    }
    QTextStream in(&tableFile);

    QString line = in.readLine();
    if (line.toInt() == 1) // WM Table
    {
        line = in.readLine();
        dieNumWM = line.toInt();

        line = in.readLine();
        secondNumWM = line.toInt();

        for (int i = 1; i <= (dieNumWM + secondNumWM); i++)
        {
            line = in.readLine();
            stringTableWM[i] = line;
        }
        tableFile.close();
    }
    else if (line.toInt() == 2) // Potions Table
    {
        for (int i = 0; i < 10; i++)
        {
            line = in.readLine();
            stringDTableP[0][i] = line;
        }
        for (int i = 1; i < 11; i++)
        {
            for (int j = 0; j < (stringDTableP[0][i-1]).toInt(); j++)
            {
                line = in.readLine();
                stringDTableP[i][j] = line;
            }
        }
        tableFile.close();
    }
}

QString wildmagic::afterFourCharacters(QString string)
{
    return string.sliced(5);
}

QString wildmagic::findTimeframe()
{
    int scaleRoll = QRandomGenerator::global()->bounded(1, 101);
    QString result;
    int timeRoll;
    if (scaleRoll <= 20) //Seconds
    {
        timeRoll = QRandomGenerator::global()->bounded(1, 61);
        result = QString::number(timeRoll) + QString(" seconds have past");
    }
    else if (scaleRoll <= 40) //Minutes
    {
        timeRoll = QRandomGenerator::global()->bounded(1, 61);
        result = QString::number(timeRoll) + QString(" minutes have past");
    }
    else if (scaleRoll <=60) //Hours
    {
        timeRoll = QRandomGenerator::global()->bounded(1, 25);
        result = QString::number(timeRoll) + QString(" hours have past");
    }
    else if (scaleRoll <= 75) //Days
    {
        timeRoll = QRandomGenerator::global()->bounded(1, 32);
        result = QString::number(timeRoll) + QString(" days have past");
    }
    else if (scaleRoll <= 85) //Months
    {
        timeRoll = QRandomGenerator::global()->bounded(1, 13);
        result = QString::number(timeRoll) + QString(" months have past");
    }
    else if (scaleRoll <= 90) //10 Years or less
    {
        timeRoll = QRandomGenerator::global()->bounded(1, 11);
        result = QString::number(timeRoll) + QString(" years have past");
    }
    else if (scaleRoll <= 94) //50 Years or less
    {
        timeRoll = QRandomGenerator::global()->bounded(11, 51);
        result = QString::number(timeRoll) + QString(" years have past");
    }
    else if (scaleRoll <= 97) //100 Years or less
    {
        timeRoll = QRandomGenerator::global()->bounded(51, 100);
        result = QString::number(timeRoll) + QString(" years have past");
    }
    else if (scaleRoll <= 99) //Centuries
    {
        timeRoll = QRandomGenerator::global()->bounded(1, 11);
        result = QString::number(timeRoll) + QString(" centuries have past");
    }
    else
    {
        result = QString("One million years have past");
    }
    return result;
}

std::vector<QString> wildmagic::rollDieWM(bool timeframe)
{
    QString output;
    QString tooltip;
    if (timeframe)
    {
        int newRoll = QRandomGenerator::global()->bounded(1,(dieNumWM+1));
        if (QRandomGenerator::global()->bounded(1, 5) < 4)
        {
            QString timeframeString = findTimeframe();
            output = afterFourCharacters(stringTableWM[newRoll]) + QString(" UNTIL ") + timeframeString.toLower();
            tooltip = QString("Value: ") + QString::number(newRoll) +
                      QString("\nWild Magic: ") + afterFourCharacters(stringTableWM[newRoll]) +
                      QString("\nTimeframe / Condition: ") + timeframeString;
        }
        else
        {
            int timeframeRoll = QRandomGenerator::global()->bounded(dieNumWM+1, dieNumWM+secondNumWM+1);
            output = afterFourCharacters(stringTableWM[newRoll]) + QString(" UNTIL ") + stringTableWM[timeframeRoll].toLower();
            tooltip = QString("Value: ") + QString::number(newRoll) +
                      QString("\nWild Magic: ") + afterFourCharacters(stringTableWM[newRoll]) +
                      QString("\nTimeframe / Condition: ") + stringTableWM[timeframeRoll];
        }

    }
    else
    {
        int newRoll = QRandomGenerator::global()->bounded(1,(dieNumWM+1));
        output = afterFourCharacters(stringTableWM[newRoll]);
        tooltip = QString("Value: ") + QString::number(newRoll) +
                          QString("\nWild Magic: ") + afterFourCharacters(stringTableWM[newRoll]);
    }
    std::vector<QString> returnVector = {output, tooltip};
    return returnVector;
}

QString wildmagic::stripAfterPeriod(int index, int rollArray[])
{
    QString selectedString = stringDTableP[index][rollArray[index-1]];
    return selectedString;
}


std::vector<QString> wildmagic::rollDiePotion(bool sideEffect)
{
    // 1. Title
    // 2. Effect and Description
    // 3. Strength
    // 4. Side Effect
    // 5. Container
    // 6. Color
    // 7. Accessory
    // 8. Texture
    // 9. Smell
    // 10. Taste

    int rollArray[11];
    for (int i = 0; i < 10; i++)
    {
        rollArray[i] = QRandomGenerator::global()->bounded(0, (stringDTableP[0][i]).toInt());
    }

    QString output;
    QString tooltip;

    if (sideEffect)
    {
        output = stripAfterPeriod(1, rollArray) +
                  QString(" of ") + stripAfterPeriod(2, rollArray) +
                  QString(" Side Effect: ") + stripAfterPeriod(4, rollArray);

        tooltip = QString("Strength: ") + stripAfterPeriod(3, rollArray) +
                  QString("\nAppearance: ") + stripAfterPeriod(6, rollArray) +
                  QString(" liquid with ") + stripAfterPeriod(7, rollArray) +
                  QString(" inside of ") + stripAfterPeriod(5, rollArray) +
                  QString("\nTexture: ") + stripAfterPeriod(8, rollArray) +
                  QString("\nSmell: ") + stripAfterPeriod(9, rollArray) +
                  QString("\nTaste: ") + stripAfterPeriod(10, rollArray);
    }
    else
    {
        output = stripAfterPeriod(1, rollArray) +
               QString(" of ") + stripAfterPeriod(2, rollArray);
        tooltip = QString("Appearance: ") + stripAfterPeriod(6, rollArray) +
                  QString(" liquid with ") + stripAfterPeriod(7, rollArray) +
                  QString(" inside of ") + stripAfterPeriod(5, rollArray) +
                  QString("\nTexture: ") + stripAfterPeriod(8, rollArray) +
                  QString("\nSmell: ") + stripAfterPeriod(9, rollArray) +
                  QString("\nTaste: ") + stripAfterPeriod(10, rollArray);
    }
    std::vector<QString> returnVector = {output, tooltip};
    return returnVector;
}
