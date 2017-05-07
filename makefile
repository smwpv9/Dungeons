start: Adventure.o  DM.o Character.o Item.o Abilities.o Map.o Action.o Utility.o
	g++ Adventure.o DM.o Character.o Item.o Abilities.o Map.o Action.o Utility.o -o start

Adventure.o: Adventure.cpp Adventure.h Character.h DM.h Map.h Utility.h
	g++ Adventure.cpp -c -std=c++11

DM.o: DM.cpp DM.h Character.h Item.h Map.h Utility.h
	g++ DM.cpp -c -std=c++11

Character.o: Character.cpp Character.h Item.h Abilities.h Utility.h
	g++ Character.cpp -c -std=c++11

Item.o: Item.cpp Item.h Abilities.h Utility.h
	g++ Item.cpp -c -std=c++11

Abilities.o: Abilities.cpp Abilities.h Action.h Utility.h
	g++ Abilities.cpp -c -std=c++11

Map.o: Map.cpp Map.h Utility.h
	g++ Map.cpp -c -std=c++11

Action.o: Action.cpp Action.h
	g++ Action.cpp -c -std=c++11

Utility.o: Utility.cpp Utility.h
	g++ Utility.cpp -c -std=c++11