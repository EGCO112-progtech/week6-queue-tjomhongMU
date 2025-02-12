//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


void	enqueue(NodePtr *head, NodePtr *tail, int x)
{
	Node	*new_node;

	new_node = (NodePtr)malloc(sizeof(Node));
	if (new_node)
	{
		new_node->data = x;
		new_node->nextPtr = NULL;
		if (*head == NULL)
			*head = new_node;
		else
			(*tail)->nextPtr = new_node; // link old tail to new tail.
		*tail = new_node; // change tail to point at new_node.
	}
}


int	dequeue(NodePtr *head, NodePtr *tail)
{
	NodePtr	t;
	int	value;

	t = *head;
	if (t)
	{
		value = t->data;
		*head = t->nextPtr; // shift head to next node.
		if (*head == NULL)
			*tail = NULL;
		free(t);
		return (value);
	}

	// if (t)
	// {
	// 	value = t->data;
	// 	if (*head == *tail) //if head and tail are pointing at the same node.
	// 		*tail = NULL;
	// 	*head = t->nextPtr;
	// 	free(t);
	// 	return (value);
	// }
	printf("Empty queue\n");
	return (0);
}
#endif
