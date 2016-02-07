/**
*	@file : Pokemon.cpp
*	@author : Ethan Ward
*	@date : 2014.02.05
*	Purpose: Implementation of Pokemon class.
*/

#include "Pokemon.h"

Pokemon::Pokemon() {
m_hp = 0;
m_attackLevel = 0;
m_defenseLevel = 0;
m_name = "";
}

void Pokemon::reduceHP(int amount) {
m_hp -= amount; 
}

int Pokemon::getHP() const {
return(m_hp);
}

int Pokemon::getAttack() const {
return(m_attackLevel);
}

int Pokemon::getDefense() const {
return(m_defenseLevel);
}

std::string Pokemon::getName() const {
return(m_name);
}

void Pokemon::setHP(int hp) {
m_hp = hp;
}

void Pokemon::setAttack(int attack) {
m_attackLevel = attack;
}

void Pokemon::setDefense(int defense) {
m_defenseLevel = defense;
}

void Pokemon::setName(std::string name) {
m_name = name;
}

