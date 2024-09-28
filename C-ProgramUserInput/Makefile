exec : main.o debug.o
	gcc -Wall -g -o exec main.o debug.o
	rm main.o debug.o
	
main.o: main.c
	gcc -Wall -g -c main.c

debug.o: ../SHARED/debug.c
	gcc -Wall -g -c ../SHARED/debug.c 

clean:
	rm -f exec main.o debug.o