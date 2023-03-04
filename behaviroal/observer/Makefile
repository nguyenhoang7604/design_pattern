all: program

program: main.o stock_publisher.o stock_observer.o
	g++ main.o stock_publisher.o stock_observer.o -o program
main.o: main.cpp
	g++ -c main.cpp

stock_publisher.o: stock_publisher.cpp
	g++ -c stock_publisher.cpp

stock_observer.o: stock_observer.cpp
	g++ -c stock_observer.cpp

