main: main.o func.o
		cc main.o func.o -o main

main.o: main.c
		cc -c main.c

func.o: func.c
		cc -c func.c

clean:
		rm func.o main.o
