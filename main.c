#include <stdio.h>
#include <stdlib.h>

struct Book{
	int number;
	char title[20];
};


int main(void) {

	struct Book *p;

	p = (struct Book*)malloc(2*sizeof(struct Book));

	if(p==NULL)
	{
		printf("메모리 할당 오류\n");
		return -1;
	}

	p->number = 1;
	strcpy(p->title, "C Programming");

	(p+1)->number = 2;	
	strcpy((p+1)->title, "Elctronics");

	free(p);

	return 0;
}

