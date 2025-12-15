#include<stdio.h>
int main()
{
	int a=10,*ptr;
	ptr=&a;
	printf("\n value of the a %d",a);
	printf("\n address of a %x",&a);
	printf("\n the value of ptr %x",ptr);
	printf("\n the address of ptr %x",&ptr);
	printf("\n the ptr pointing value =%d",*ptr);
	return 0;	
}
