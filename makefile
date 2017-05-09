start: Main.o Player.o
	g++ Main.o Player.o -o start

Main.o: Main.cpp Player.h
	g++ Main.cpp -c -std=c++11

Player.o: Player.cpp Player.h
	g++ Player.cpp -c -std=c++11
