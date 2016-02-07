/**
*	@file : main.cpp
*	@author : Ethan Ward
*	@date : 2014.02.05
*	Purpose: Loops the pokemon game until the user doesn't want to any more, as well as calls the Colosseum file to run the game.
*/

#ifndef MAIN_CPP
#define MAIN_CPP
#include <iostream>
#include <string>
#include "Colosseum.h"
#include "Pokemon.h"

int main() {

Pokemon* p1 = new Pokemon();
Pokemon* p2 = new Pokemon();
Colosseum* c = new Colosseum();
std::string again = "y";

while(again == "y") {
	std::cout << "Player 1, build your Pokemon!" << std::endl << "=====================" << std::endl;
	c->userBuild(*(p1));

	std::cout << "Player 2, build your Pokemon!" << std::endl << "=====================" << std::endl;
	c->userBuild(*(p2));

	c->play(*(p1), *(p2));

	std::cout << "\n" << "Do you want to play again? (y/n):";
	std::cin >> again;
}

}

#endif
