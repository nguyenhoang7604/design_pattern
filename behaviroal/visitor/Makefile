all: program

program: main.o necessity.o liquor.o tobacco.o tax_visitor.o
	g++ main.o necessity.o liquor.o tobacco.o tax_visitor.o -o program
main.o: main.cpp
	g++ -c main.cpp

necessity.o: necessity.cpp
	g++ -c necessity.cpp

liquor.o: liquor.cpp
	g++ -c liquor.cpp

tobacco.o: tobacco.cpp
	g++ -c tobacco.cpp

tax_visitor.o: tax_visitor.cpp
	g++ -c tax_visitor.cpp

