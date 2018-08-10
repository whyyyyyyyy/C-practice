#include <stdio.h>
#include <stdlib.h>
typedef struct _node
{
	int p;
}*stack;
int main(int argc,char *argv[])
{
	stack d;
	d=(stack)malloc(sizeof(stack));
	d->p=0;
	printf("%d\n",d->p);
	d->p=1;
	printf("%d\n",d.p);
	return 0;
}
