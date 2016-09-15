#include <iostream>
using namespace std;
#include "Controller.h"
#include "UserBot.cpp"
#include "ComputerBot.cpp"

int main()
{
    UserBot *ub = new UserBot();
    ComputerBot *cb = new ComputerBot();
    Controller *gameC = new Controller(ub,cb);
    gameC->start();

}

