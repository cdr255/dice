CXX=g++
CFLAGS=-Wall -c
LFLAGS=-Wall
OBJS=dice.o
LIBS=
dice: dice.o
	$(CXX) $(LFLAGS) $(OBJS) -o dice $(LIBS)


dice.o: main.cpp dice.hpp
	$(CXX) $(CFLAGS) -o dice.o main.cpp $(LIBS)


clean: 
	rm -rf *~ *.o dice
