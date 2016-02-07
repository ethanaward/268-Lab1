Lab1: main.o Dice.o Pokemon.o Colosseum.o
	g++ -g -Wall -o Lab1 main.o Dice.o Pokemon.o Colosseum.o

main.o: main.cpp Colosseum.h
	g++ -g -Wall -c main.cpp

Dice.o: Dice.h Dice.cpp
	g++ -g -Wall -c Dice.cpp

Pokemon.o: Pokemon.h Pokemon.cpp
	g++ -g -Wall -c Pokemon.cpp

Colosseum.o: Colosseum.h Colosseum.cpp
	g++ -g -Wall -c Colosseum.cpp

clean:
	rm *.o Lab1
	clean done
