#include<stdio.h>

int main()
{
	int i=5;
	int*ptr,**ptrptr;
	ptr=&i;
	ptrptr=&ptr;
	printf("Value of i=%d\n",i);
	printf("Value of ptr=%d\n",*ptr);
	printf("Value of ptrptr=%d\n",**ptrptr);
}



