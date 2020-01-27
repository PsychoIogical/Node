TestSuite: main.o NodeTest.o
	g++ -std=c++11 -g -Wall main.o NodeTest.o -o TestSuite
main.o: main.cpp NodeTest.h
	g++ -std=c++11 -g -Wall -c main.cpp
NodeTest.o: NodeTest.cpp Node.h
	g++ -std=c++11 -g -Wall -c NodeTest.cpp
clean:
	rm *.o TestSuite
