#include <stdlib.h>
#include "linkedlist.h"

int main(int argc, char **argv) {
	llnode *head = NULL; 	
	printlist(head);

	add(&head, 1);
	printlist(head);	
	add(&head, 2);
	printlist(head);	
	
	freelist(head);
 	return EXIT_SUCCESS;
}


