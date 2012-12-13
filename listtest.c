#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(int argc, char **argv) {
	llnode *head = NULL; 	
	printf("Initial list:\n");
	printlist(head);

	printf("\nTesting add:\n");
	add(&head, 1);
	printlist(head);	
	add(&head, 2);
	printlist(head);	
	add(&head, 3);
	printlist(head);	

	printf("\nTesting del:\n");
	del(&head, 2);
	printlist(head);	
	del(&head, 1);
	printlist(head);	
	del(&head, 3);
	printlist(head);	
	del(&head, 4);	

	freelist(head);
 	return EXIT_SUCCESS;
}


