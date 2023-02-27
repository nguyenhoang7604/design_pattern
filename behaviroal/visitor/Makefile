all: program

program: main.o necessity.o liquor.o tabacco.o tax_visitor.o
	g++ main.o necessity.o liquor.o tabacco.o tax_visitor.o -o program
main.o: main.cpp
	g++ -c main.cpp

necessity.o: necessity.cpp
	g++ -c necessity.cpp

liquor.o: liquor.cpp
	g++ -c liquor.cpp

tabacco.o: tabacco.cpp
	g++ -c tabacco.cpp

tax_visitor.o: tax_visitor.cpp
	g++ -c tax_visitor.cpp

