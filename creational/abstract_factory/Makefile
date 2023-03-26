all: program

program: main.o enemy_ship.o enemy_ship_building.o enemy_ship_factory.o \
	weapon_rocket.o weapon_lazer.o engine_ufo.o engine_tank.o engine_plane.o
	g++ main.o enemy_ship_building.o \
	enemy_ship.o enemy_ship_factory.o engine_ufo.o weapon_lazer.o weapon_rocket.o \
	engine_tank.o engine_plane.o -o program

main.o: main.cpp
	g++ -c main.cpp

enemy_ship_building.o: enemy_ship_building.cpp
	g++ -c enemy_ship_building.cpp

# ufo_enemy_ship_building.o: ufo_enemy_ship_building.cpp
# 	g++ -c ufo_enemy_ship_building.cpp

# enemy_ship_ufo.o: enemy_ship_ufo.cpp
# 	g++ -c enemy_ship_ufo.cpp

# enemy_ship_plane.o: enemy_ship_plane.cpp
# 	g++ -c enemy_ship_plane.cpp

enemy_ship_factory.o: enemy_ship_factory.cpp
	g++ -c enemy_ship_factory.cpp

weapon_rocket.o: weapon_rocket.cpp
	g++ -c weapon_rocket.cpp

weapon_lazer.o: weapon_lazer.cpp
	g++ -c weapon_lazer.cpp

engine_ufo.o: engine_ufo.cpp
	g++ -c engine_ufo.cpp

engine_tank.o: engine_tank.cpp
	g++ -c engine_tank.cpp

engine_plane.o: engine_plane.cpp
	g++ -c engine_plane.cpp

tank_ememy.o: tank_ememy.cpp
	g++ -c tank_ememy.cpp

# enemy_ship_tank.o: enemy_ship_tank.cpp
# 	g++ -c enemy_ship_tank.cpp