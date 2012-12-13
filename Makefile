listtest: linkedlist.o listtest.c
		  gcc -o listtest  linkedlist.o listtest.c

linkedlist.o: linkedlist.h linkedlist.c
			  gcc -c linkedlist.c
clean :
	rm listtest *.o