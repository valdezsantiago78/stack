todo: main.o helper.o stack.o
	g++ -Wall -o stack-exe main.o helper.o stack.o
main.o: main.cpp
	g++ -Wall -c main.cpp
helper.o:
	g++ -Wall -c helper.cpp helper.h 
stack.o:
	g++ -Wall -c stack.cpp stack.h
clean:
	rm -f *.o