/**
*	@file : Colosseum.h
*	@author : Ethan Ward
*	@date : 2014.02.05
*	Purpose: Allows the user to build a Pokemon, creates a Colosseum instance, and plays through the whole Pokemon game until either one Pokemon has been defeated or 10 rounds have passed.
*/
#ifndef COLOSSEUM_H
#define COLOSSEUM_H

#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Dice.h"

class Colosseum {

private: 
	Dice d20;
	Dice d6;

public: 
/**
	*  @pre None
	*  @post Creates and initializes a Colosseum instance with dice set to their appropriate values.
	*/
	Colosseum();
/**
	*  @pre None
	*  @post Takes in a Pokemon and sets its values to user-created values.
	*/
	void userBuild(Pokemon& p);
/**
	*  @pre None of the Pokemon have been defeated.
	*  @post Rolls for attack and defense levels to see if the attacker hits the defender, then if it does, rolls for damage. Returns true if the defender is defeated, false if it isn't.
	*/
	bool attack(const Pokemon& attacker, Pokemon& defender);
/**
	*  @pre None
	*  @post Plays the Pokemon game until either 10 rounds have passed or one of the Pokemon has been defeated.
	*/
	void play(Pokemon& p1, Pokemon& p2);

};

#endif
