lab02 : lab02.o ghcontrol.o
	gcc -g -o lab02 lab02.o ghcontrol.o
lab02.o: lab02.c
	gcc -g -c lab02.c
ghcontrol.o: ghcontrol.c
	gcc -g -c ghcontrol.c
understand: understanding_the_lab.c
	cc understanding_the_lab.c -o understanding_the_lab
clean:
	rm *.o	
