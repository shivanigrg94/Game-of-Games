
#include "seven_up.h"

seven_up::seven_up(){
	srand(time(0));

}

void seven_up::play_game(int guess){
	int dice1 = 1+(rand()%7);
	int dice2 = 1+(rand()%7);
	int res = dice1+dice2;
	if (guess==1){
		if (res>7) std::cout<<"Dice rolled "<<res <<" you win!!"<<std::endl;
		else std::cout<<"Dice rolled "<<res<<" you lose!!"<<std::endl;
	}
	else {
		if (res>7) std::cout<<"Dice rolled "<<res <<" you lose!!"<<std::endl;
		else std::cout<<"Dice rolled "<<res<<" you win!!"<<std::endl;
	}
}
