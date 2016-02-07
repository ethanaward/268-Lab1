/**
*	@file : Pokemon.h
*	@author : Ethan Ward
*	@date : 2014.02.05
*	Purpose: Creates Pokemon and changes their values when needed.
*/
#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {

private:
	int m_hp;
	int m_attackLevel;
	int m_defenseLevel;
	std::string m_name;
public:
/**
	*  @pre None
	*  @post Creates and initializes a Pokemon instance with variables set to 0 and name set to an empty string
	*/
	Pokemon();
/**
	*  @pre None
	*  @post Reduces the Pokemon's hp by the given amount.
	*/
	void reduceHP(int amount);
/**
	*  @pre None
	*  @post Returns the HP of the Pokemon.
	*/
	int getHP() const;
/**
	*  @pre None
	*  @post Returns the attackLevel of the Pokemon.
	*/
	int getAttack() const;
/**
	*  @pre None
	*  @post Returns the defenseLevel of the Pokemon.
	*/
	int getDefense() const;
/**
	*  @pre None
	*  @post Returns the name of the Pokemon.
	*/
	std::string getName() const;
/**
	*  @pre None
	*  @post Sets the HP of the Pokemon to the given value.
	*/
	void setHP(int hp);
/**
	*  @pre None
	*  @post Sets the attackLevel of the Pokemon to the given value.
	*/
	void setAttack(int attack);
/**
	*  @pre None
	*  @post Sets the defenseLevel of the Pokemon to the given value.
	*/
	void setDefense(int defense);
/**
	*  @pre None
	*  @post Sets the name of the Pokemon to the given value.
	*/
	void setName(std::string name);

};

#endif
