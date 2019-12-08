
# Makefile for sorting algorithms

sorting1: main.o quicksort.o insertionsort.o util.o
	gcc -Wall -std=c99 main.o quicksort.o insertionsort.o util.o -D RETURN -o sorting

sorting2: main.o quicksort2.o insertionsort2.o util.o
	gcc -Wall -std=c99 main.o quicksort2.o insertionsort2.o util.o -D COUNT -D RETURN -o sorting

main.o: main.c main.h
	gcc -Wall -std=c99 -c main.c

quicksort.o: quicksort.c quicksort.h
	gcc -Wall -std=c99 -c quicksort.c -o quicksort.o

quicksort2.o: quicksort2.c quicksort2
	gcc -Wall -std=c99 -c quicksort.c -D COUNT -o quicksort.o

insertionsort.o: insertionsort.c insertionsort.h
	gcc -Wall -std=c99 -c insertionsort.c

insertionsort2.o: insertionsort.c insertionsort.h
	gcc -Wall -std=c99 -c insertionsort2.c



util.o: util.c util.h
	gcc -Wall -std=c99 -c util.c


