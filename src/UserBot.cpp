#include <cstdlib>
#include <ctime>
using namespace std;
#include "Bot.h"

class UserBot: public Bot{
    public:
    UserBot(){}
<<<<<<< HEAD
    UserBot(UserBot const &cb){}
=======
    UserBot(UserBot const &uc){}
>>>>>>> origin/master
	Block makeMove(GameConfig::MoveStatus lastMoveStatus, bool isBoatsDestroyed[]){
        int x = rand()%GameConfig::ROWS;
        int y = rand()%GameConfig::COLUMNS;
        return Block(x,y);
    }
<<<<<<< HEAD
	Boat* positionBoats(Boat boats[]) {
=======

    Boat* positionBoats(Boat boats[]) {
>>>>>>> origin/master
        for(int i = 0; i<GameConfig::NBOATS;i++){
            //set boat blocks
        }
        return boats;
    }
};
<<<<<<< HEAD
=======

>>>>>>> origin/master
