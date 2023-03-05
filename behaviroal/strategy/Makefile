all: program

program: main.o first_strategy.o second_strategy.o context.o
	g++ main.o first_strategy.o second_strategy.o context.o -o program

main.o: main.cpp
	g++ -c main.cpp

first_strategy.o: first_strategy.cpp
	g++ -c first_strategy.cpp

second_strategy.o: second_strategy.cpp
	g++ -c second_strategy.cpp

context.o: context.cpp
	g++ -c context.cpp
