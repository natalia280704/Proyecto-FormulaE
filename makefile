simuladorFormE.: simuladorFormE.o
	gcc simuladorFormE.o -o simuladorFormE

simuladorFormE.o: simuladorFormE.c
	gcc -c simuladorFormE.c

clean:
	rm *.o
