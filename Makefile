linkedlist: linkedlist.o
			gcc -o linkedlist linkedlist.o

linkedlist.o: linkedlist.h linkedlist.c
			  gcc -c linkedlist.c
clean :
	rm linkedlist *.o