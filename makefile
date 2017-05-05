start: Adventure.o  DM.o Character.o Item.o Abilities.o Map.o Utility.o
	g++ Adventure.o DM.o Character.o Item.o Abilities.o Map.o Utility.o -o start

Adventure.o: Adventure.cpp Adventure.h Character.h DM.h Map.h Utility.h
	g++ Adventure.cpp -c

DM.o: DM.cpp DM.h Character.h Item.h Map.h Utility.h
	g++ DM.cpp -c

Character.o: Character.cpp Character.h Item.h Abilities.h Utility.h
	g++ Character.cpp -c

Item.o: Item.cpp Item.h Abilities.h Utility.h
	g++ Item.cpp -c

Abilities.o: Abilities.cpp Abilities.h Utility.h
	g++ Abilities.cpp -c

Map.o: Map.cpp Map.h Utility.h
	g++ Map.cpp -c

Utility.o: Utility.cpp Utility.h
	g++ Utility.cpp -c