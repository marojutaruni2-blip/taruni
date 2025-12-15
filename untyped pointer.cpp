#include<stdio.h>
int main()
{
	int a=10;
	float b=3.2;
	void *ptr;
	ptr=&a;
	printf("the value of ptr = %x",ptr);
	printf("\n the address of ptr = %x",&ptr);
	printf("\n the pointers value %d",*(int*)ptr);
	ptr=&b;
	printf("\n the ptr pointer value = %f",*(float*)ptr);
	printf("\n the value of ptr = %x",ptr);
}
