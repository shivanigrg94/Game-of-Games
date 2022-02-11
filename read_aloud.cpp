#include "read_aloud.h"
#include <windows.h>

#include <string>

read_aloud::read_aloud(){
	srand(time(0));

}

void read_aloud::play_game(){
int wordno = (rand()%70);
//words word = (words)wordno;


system("Color 75");

std::cout<<words[wordno]<<std::endl;
}
