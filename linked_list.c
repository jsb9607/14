#include <stdio.h>
#include <stdlib.h>

static struct linknode *list;

struct linknode{
	int data;
	linknode* next;	
};



static struct linknode *create_node(int value){

	struct linknode* ptr;
	ptr =(struct linknode*)malloc(sizeof(struct linknode));

	ptr->data = value;
	ptr->next = NULL;

	return ptr;
}

int insertDataToTail(int value){

	linknode *nodePtr;
	linknode *srchPtr;
	
	nodePtr = create_node(value);
	if(nodePtr == NULL)	
	{
		printf("memory allocation error\n");
		return -1;
	}

	if(list == NULL)
	{
		list = nodePtr;
	}
	else
	{
		srchPtr = list;
		while(srchPtr->next != NULL){

			srchPtr = srchPtr->next;
			
		}
		srchPtr->next = nodePtr;
	}

	return 0;
	
}


void print_list(void)
{
	linknode *ptr = list;
	int i;
	
	while(ptr->next != NULL)
	{
		printf("%i \n", ptr->data);
		ptr = ptr->next;
	}
		
}

void print_node(int n)
{
	linknode *ptr = list;
	int i = 0;
	
	while(ptr != NULL && ptr->next != NULL)
	{
		if(i==n)
		{
			printf("%i'th data : %i\n", i, ptr->data);
			return;
		}
		ptr = ptr->next;		
		i++;
	}
	
	printf("no data\n");
	
}

