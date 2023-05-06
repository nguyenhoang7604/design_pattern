all: program

program: main.o dog.o sheep.o prototype_factory.o
	g++ main.o dog.o sheep.o prototype_factory.o -o program

main.o: main.cpp
	g++ -c main.cpp

dog.o: dog.cpp
	g++ -c dog.cpp

sheep.o: sheep.cpp
	g++ -c sheep.cpp

prototype_factory.o: prototype_factory.cpp
	g++ -c prototype_factory.cpp