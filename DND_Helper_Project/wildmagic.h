#ifndef WILDMAGIC_H
#define WILDMAGIC_H

#include <QMessageBox>

class wildmagic
{
public:
    wildmagic();
    void loadList(QString filename);
    std::vector<QString> rollDieWM(bool timeframe);
    std::vector<QString> rollDiePotion(bool sideEffect);

private:
    QString stringTableWM[10101];
    QString stringDTableP[12][101];
    QString findTimeframe();
    QString afterFourCharacters(QString string);
    QString stripAfterPeriod(int index, int rollArray[]);
    int dieNumWM, secondNumWM;
};

#endif // WILDMAGIC_H
