#include <cstdlib>
#include <ctime>
using namespace std;
#include "Bot.h"

class ComputerBot: public Bot{
    public:
    ComputerBot(){}
    ComputerBot(ComputerBot const &cb){}
	Block makeMove(GameConfig::MoveStatus lastMoveStatus, bool isBoatsDestroyed[]){
        int x = rand()%GameConfig::ROWS;
        int y = rand()%GameConfig::COLUMNS;
        return Block(x,y);
<<<<<<< HEAD
    }
	Boat* positionBoats(Boat boats[]) {
        for(int i = 0; i<GameConfig::NBOATS;i++){
            //set boat blocks
        }
        return boats;
    }
};
=======
    }
	Boat* positionBoats(Boat boats[]) {
        for(int i = 0; i<GameConfig::NBOATS;i++){
            //set boat blocks
        }
        return boats;
    }

};


>>>>>>> origin/master
