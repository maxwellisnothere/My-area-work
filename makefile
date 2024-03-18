APPEND = week10

all : main.o Area.o Circle.o Circle2.o Square.o 
	g++ main.o Area.o Circle.o Circle2.o Square.o -o $(APPEND)

main.o : main.cpp
	g++ -c main.cpp -o main.o

Area.o : Area/Area.cpp Area/Area.h
	g++ -c Area/Area.cpp -o Area.o

Circle.o : Circle/Circle.cpp Circle/Circle.h Area/Area.h
	g++ -c Circle/Circle.cpp -o Circle.o

Circle2.o : Circle2/Circle2.cpp Circle2/Circle2.h Circle/Circle.h 
	g++ -c Circle2/Circle2.cpp -o Circle2.o

Square.o : Square/Square.cpp Square/Square.h
	g++ -c Square/Square.cpp -o Square.o

clean:
	rm main.o Area.o Circle.o  Circle2.o Square.o $(APPEND)
