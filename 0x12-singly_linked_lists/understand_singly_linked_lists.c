#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

struct node

{
	int data;
	nodePtr next;
};

int main(int argc, const char **argv)

{
	nodePtr first = NULL;
	first = malloc(sizeof(struct node));

	first->next = NULL;
	first->data = 254;

	first->next = malloc(sizeof(struct node));
	first->next->next = NULL;
	first->next->data = 255;

	printf("Hello, Kenya!\n");

	nodePtr temp;
	temp = malloc(sizeof(struct node));
	temp->next = first;
	first = temp;

	free(first);
	free(temp);

	return ;
}
