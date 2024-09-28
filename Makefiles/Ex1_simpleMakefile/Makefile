# out will be the name of the executable
out : main.o localHeader.o
	cc -o out main.o localHeader.o ../SHARED/debug.o

# only needed for basic main.c program
main.o: main.c
	cc -c main.c

# file path is in same folder
localHeader.o: localHeader.c localHeader.h
	cc -c localHeader.c

# file path is another directory
debug.o: ../SHARED/debug.c ../SHARED/debug.h 
	cc -c debug.c

clean : rm -f out main.o localHeader.o debug.o