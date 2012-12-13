typedef struct list_node {
	int value;
	struct list_node *next;
} llnode;

void add(llnode **head, int val);
void del(llnode **head, int val);
void freelist(llnode *head);
void printlist(llnode *head);

