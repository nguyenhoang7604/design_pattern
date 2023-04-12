all: program

program: main.o car.o car_builder.o car_manual_builder.o director.o
	g++ main.o car.o car_builder.o car_manual_builder.o director.o -o program

main.o: main.cpp
	g++ -c main.cpp

car.o: car.cpp
	g++ -c car.cpp

car_builder.o: car_builder.cpp
	g++ -c car_builder.cpp

car_manual_builder.o: car_manual_builder.cpp
	g++ -c car_manual_builder.cpp

director.o: director.cpp
	g++ -c director.cpp

