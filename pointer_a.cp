#include<stdio.h>

int main()
{
	int a,b;
	int *ptra,*ptrb;
	
	printf("Enter a no: ");
	scanf("%d",&a);
	printf("Enter a no: ");
	scanf("%d",&b);
	
	ptra=&a;
	ptrb=&b;
	
	printf("sum of two pointers is %d \n", *ptra+*ptrb);
	printf("difference of two pointers is %d \n", *ptra-*ptrb);
	printf("product of two pointers is %d \n", *ptra* *ptrb);
	printf("division of two pointers is %d \n", *ptra/(*ptrb));
}
