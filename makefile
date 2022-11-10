carreraFormE.: carreraFormE.o
	gcc carreraFormE.o -o carreraFormE

carreraFormE.o: carreraFormE.c
	gcc -c carreraFormE.c

clean:
	rm *.o
