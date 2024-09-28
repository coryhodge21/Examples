exec : main.o debug.o
	gcc -Wall -g -o exec main.o debug.o
	
main.o: main.c
	gcc -Wall -c main.c

debug.o: ../SHARED/debug.c
	cc -c ../SHARED/debug.c 

clean:
	rm -f exec main.o debug.o