#ifndef BASEDIE_H
#define BASEDIE_H

#include <Vector>

class baseDie
{
public:
    baseDie();
    baseDie(int setAmount, int setDieNum);
    void setDieAmount(int setAmount);
    void setDieNum(int setDieNum);
    int getAmount();
    int getDieNum();
    int getLastTotal();
    std::vector<int> getLastRolls();
    int rollDie();

private:
    int amount;
    int dieNum;
    int lastTotal;
    std::vector<int> lastRolls;
};

#endif // BASEDIE_H
