exec : main.o debug.o
	g++ -Wall -g -o exec main.o debug.o
	rm -f main.o debug.o

main.o: cppMain.cpp
	g++ -Wall -g -c cppMain.cpp -o main.o

debug.o: ./Shared/debug.cpp
	g++ -Wall -g -c ./Shared/debug.cpp

clean:
	rm -f exec main.o debug.o