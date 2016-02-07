/**
*	@file : Colosseum.cpp
*	@author : Ethan Ward
*	@date : 2014.02.05
*	Purpose: Implementation of Colosseum class.
*/

#include "Colosseum.h"

Colosseum::Colosseum() {
d20 = Dice(20);
d6 = Dice();
}

void Colosseum::userBuild(Pokemon& p) {
int temp = 1;

std::string temp2 = "";
std::cout << "Please name your Pokemon:";
std::cin >> temp2;
p.setName(temp2);

while(temp2.length() < 1) {
	std::cout << "Sorry, your name must be at least 1 character long:";
	std::cin >> temp2;
	p.setName(temp2);
}

std::cout << "How many hit points will it have? (1-50):";
std::cin >> temp;
p.setHP(temp);

while(temp > 50 || temp < 1) {
	std::cout <<"Sorry, hit points must be between 1 and 50. Try again:";
	std::cin >> temp;
	p.setHP(temp);
}

std::cout << "Split fifty points between attack level and defense level" << std::endl << "Enter your attack level (1-49):";
std::cin >> temp;
p.setAttack(temp);

while(temp > 49 || temp < 1) {
	std::cout <<"Sorry, attack must be between 1 and 49. Try again:";
	std::cin >> temp;
	p.setAttack(temp);
}

std::cout << "Enter your defense level (1-" << (50 - p.getAttack()) << "):";
std::cin >> temp;
p.setDefense(temp);

while(temp > 50 - p.getAttack() || temp < 1) {
	std::cout <<"Sorry, defense must be between 1 and " << (50-p.getAttack()) << ". Try again:";
	std::cin >> temp;
	p.setAttack(temp);
}

}

bool Colosseum::attack(const Pokemon& attacker, Pokemon& defender) {
int defenseBonus = 0;
int attackBonus = 0;

std::cout << attacker.getName() << " is attacking " << defender.getName() << std::endl;

defenseBonus = d20.roll();
attackBonus = d20.roll();

std::cout << attacker.getName() << " rolls an attack bonus of " << attackBonus << std::endl;
std::cout << defender.getName() << " rolls a defense bonus of " << defenseBonus << std::endl;

if(attacker.getAttack() + attackBonus > defender.getDefense() + defenseBonus) {
	std::cout << "The attack hits dealing 3-D6 damage!" << std::endl;
	int roll1; 
	int roll2; 
	int roll3;
	roll1 = d6.roll();
	roll2 = d6.roll();
	roll3 = d6.roll();
	std::cout << "The rolls are " << roll1 << ", " << roll2 << ", and " << roll3 << " totaling: " << roll1 + roll2 + roll3 << " damage!" << std::endl;
	defender.reduceHP(roll1 + roll2 + roll3);

	if(defender.getHP() <= 0) {
		std::cout << defender.getName() << " has been defeated!" << std::endl;
		return(true);
	}

	else {
		std::cout << defender.getName() << " has " << defender.getHP() << " hit points left" << std::endl;
	return(false);
	}

}

else {
	std::cout << "The attack missed!" << std::endl;
	return(false);
}

}

void Colosseum::play(Pokemon& p1, Pokemon& p2) {
Dice d2;
d2 = Dice(2);
int roll = d2.roll();
bool end = false;

std::cout << "Choosing which player to go first: " << std::endl << "Player " << roll << " will go first." << std::endl;

for(int i = 1; i <= 10; i++) {

	if (roll == 1) {

	if(end == false) {
		std::cout << "\n" << "Round " << i << "!" << std::endl << "\n";
		end = attack(p1,p2);
		if (end == false) {
			end = attack(p2,p1);
		}
	}
	}

	if (roll == 2) {

	if(end == false) {
		std::cout << "\n" << "Round " << i << "!" << std::endl << "\n";
		end = attack(p2,p1);
		if (end == false) {
			end = attack(p1,p2);
		}
	}

	}

}


}


