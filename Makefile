
output: driver.o Pokemon.o Tree.o
	g++ driver.o Pokemon.o Tree.o -o output

driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o

Pokemon.o: Pokemon.cpp Pokemon.h
	g++ -c Pokemon.cpp -o Pokemon.o

Tree.o: Tree.cpp Tree.h
	g++ -c Tree.cpp -o Tree.o