#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void add(llnode **head, int val) {
	llnode *tmp;	

	if ((tmp = malloc(sizeof(*tmp))) == NULL) {
		printf("Error allocating new node.\n");
		(void)exit(EXIT_FAILURE);
	}

	// Add the new value
	tmp->value = val;
	// Check if list is currently empty
	if (*head == NULL) {
		tmp->next = NULL;
		*head = tmp;
	// If not, add new node as the head of list
	} else {
		tmp->next = *head;
		*head = tmp;
	}
}


void del(llnode **head, int val) {
	llnode *tmp = *head;	
	llnode *prev = *head;	
	
	while (tmp != NULL) {
		// If value was found, check if we're removing the head	
		if (tmp->value == val) {
			if (tmp == *head) {				
				*head = tmp->next;				
			} else {				
				prev->next = tmp->next;
			}
			free(tmp);						
			return;
		}
		prev = tmp;
		tmp = tmp->next;
	}	
	printf("Value %d not found.\n", val);		
}


void freelist(llnode *head) {
	llnode *tmp;

	while (head != NULL) {
		// In case there is the need to free memory within the list, don't forget it
		// free(head->value);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}


void printlist(llnode *head) {
	llnode *tmp = head;

	if (tmp == NULL) {
		printf("List is empty\n");
		return;	
	}

	while (tmp != NULL) {
		if (tmp->next == NULL) {			
			printf("%d\n", tmp->value);
		} else {
			printf("%d -> ", tmp->value);	
		}
		tmp = tmp->next;
	}
}