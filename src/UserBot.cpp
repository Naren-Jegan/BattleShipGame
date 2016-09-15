#include <cstdlib>
#include <ctime>
using namespace std;
#include "Bot.h"

class UserBot: public Bot{
    public:
    UserBot(){}

    UserBot(UserBot const &uc){}
	Block makeMove(GameConfig::MoveStatus lastMoveStatus, bool isBoatsDestroyed[]){
        int x = rand()%GameConfig::ROWS;
        int y = rand()%GameConfig::COLUMNS;
        return Block(x,y);
    }
    Boat* positionBoats(Boat boats[]) {
        for(int i = 0; i<GameConfig::NBOATS;i++){
            //set boat blocks
        }
        return boats;
    }
};