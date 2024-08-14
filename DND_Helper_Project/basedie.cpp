#include "basedie.h"
#include <QRandomGenerator>

baseDie::baseDie() {}

baseDie::baseDie(int setAmount, int setDieNum)
{
    amount = setAmount;
    dieNum = setDieNum;
}

void baseDie::setDieAmount(int setAmount)
{
    amount = setAmount;
}
void baseDie::setDieNum(int setDieNum)
{
    dieNum = setDieNum;
}

int baseDie::getAmount()
{
    if (amount == NULL)
    {
        return -1;
    }
    return amount;
}
int baseDie::getDieNum()
{
    if (dieNum == NULL)
    {
        return -1;
    }
    return dieNum;
}

int baseDie::getLastTotal()
{
    if (lastTotal == NULL)
    {
        return -1;
    }
    else
    {
        return lastTotal;
    }
}

std::vector<int> baseDie::getLastRolls()
{
    if (lastRolls.empty())
    {
        lastRolls.push_back(-1);
        return lastRolls;
    }
    else
    {
        return lastRolls;
    }
}

int baseDie::rollDie()
{
    if (amount == NULL || dieNum == NULL)
    {
        return -1;
    }
    lastRolls.clear();
    int finalRoll = 0;
    for (int i = 0; i < amount; i++)
    {
        int newRoll = QRandomGenerator::global()->bounded(1,dieNum);
        finalRoll += newRoll;
        lastRolls.push_back(newRoll);
    }
    lastTotal = finalRoll;
    return finalRoll;
}

