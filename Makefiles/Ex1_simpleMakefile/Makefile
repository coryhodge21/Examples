# out will be the name of the executable
out : main.o localHeader.o debug.o
	cc -o out main.o localHeader.o debug.o
	rm -f localHeader.h.gch localHeader.o debug.o \
	main.o ../SHARED/debug.h.gch

# only needed for basic main.c program
main.o: main.c
	cc -c main.c

# file path is in same folder
localHeader.o: localHeader.c 
	cc -c localHeader.c localHeader.h

# file path is another directory
debug.o: ../SHARED/debug.c
	cc -c ../SHARED/debug.c ../SHARED/debug.h 

clean : 
	rm -f out main.o localHeader.o debug.o \
	localHeader.h.gch ../SHARED/debug.h.gch