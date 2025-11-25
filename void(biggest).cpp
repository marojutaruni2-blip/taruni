#include<stdio.h>
void biggest();
int main()
{
	biggest();
	return 0;
}
void biggest()
{
	int a,b,c;
	printf("\n enter a,b&c values");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	printf("\n a is big");
	else if(b>c)
	printf("b is big");
	else
	printf("c is big");
}
