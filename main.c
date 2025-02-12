#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"


int	main(int argc, char **argv)
{

	int	i;
	int	x;

	// NodePtr	headPtr;
	// NodePtr	tailPtr;
	// headPtr = NULL;
	// tailPtr = NULL;
	// i = 1;
	// while (i < argc)
	// {
	// 	if (strcmp(argv[i], "x") == 0)
	// 	{
	// 		x = dequeue(&headPtr, &tailPtr);
	// 		printf("dequeing %d\n", x);
	// 	}
	// 	else
	// 	{
	// 		enqueue(&headPtr, &tailPtr, atoi(argv[i]));
	// 	}
	// 	i++;
	// }
  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

	i = 1;
	while (i < argc)
	{
		if (strcmp(argv[i], "x") == 0)
		{
			x = dequeue_struct(&q);
			if (q.size != 0)
				printf("dequeing %d\n", x);
		}
		else
		{
			enqueue_struct(&q, atoi(argv[i]));
		}
		i++;
	}
	return (0);
}
