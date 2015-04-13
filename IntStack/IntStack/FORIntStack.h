#include<stdio.h>
#include<stdlib.h>

typedef struct  IntStack
{
	unsigned int  a;
	struct  IntStack *Link;
}IntStack;



int   Push(IntStack *top,unsigned int m)
{
	IntStack *p=(IntStack *)malloc(sizeof(IntStack));
	if(p=NULL)return 0;
	p->Link = top->Link; p->a = m;
	top = p; return 1;

}

void  Pop(IntStack *top)
{	
	IntStack *p;
	if (top->Link!=NULL)
	{
		printf("%ld", top->a);
		p = top;
		top = top->Link;
		free(p);

	}
	
}