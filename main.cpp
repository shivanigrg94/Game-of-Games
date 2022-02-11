
#include <iostream>
#include "seven_up.h"
#include "read_aloud.h"

int main() {
	
std::cout<<"Welcome to the Game of Games"<<std::endl;
std::cout<<"1. Seven up"<<std::endl;
std::cout<<"2. Read aloud"<<std::endl;
std::cout<<"0. Quit"<<std::endl;
int choice;
do{
std::cin>>choice;
switch(choice){
	case 1: 
	{
	
	    std::cout<<"Ready to play Seven Up : press 1 for up and 0 for down"<<std::endl;
	    int guess;
	    std::cin>>guess;
	    seven_up *s = new seven_up();
	    s->play_game(guess);
	    break;
	}
	case 2:
	{
	
		std::cout<<"You chose Read aloud"<<std::endl;
		read_aloud *r = new read_aloud();
		r->play_game();
		break;
	}
	
}
}while(choice!=0);
}
