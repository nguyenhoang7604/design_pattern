all: program

program: main.o enemy_ship_factory.o enemy_ship.o ufo_enemy_ship.o rocket_enemy_ship.o lazer_enemy_ship.o
	g++ main.o enemy_ship_factory.o enemy_ship.o ufo_enemy_ship.o rocket_enemy_ship.o lazer_enemy_ship.o -o program

main.o: main.cpp
	g++ -c main.cpp

enemy_ship_factory.o: enemy_ship_factory.cpp
	g++ -c enemy_ship_factory.cpp

enemy_ship.o: enemy_ship.cpp
	g++ -c enemy_ship.cpp

ufo_enemy_ship.o: ufo_enemy_ship.cpp
	g++ -c ufo_enemy_ship.cpp

rocket_enemy_ship.o: rocket_enemy_ship.cpp
	g++ -c rocket_enemy_ship.cpp

lazer_enemy_ship.o: lazer_enemy_ship.cpp
	g++ -c lazer_enemy_ship.cpp
