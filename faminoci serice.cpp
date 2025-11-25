#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("\n enter n value");
	scanf("%d",&n);
	printf("%d \t %d",a,b);
	do
	{
		c=a+b;
		printf("\t %d",c);
		a=b;
		b=c;
		n--;
      }	while(n-2>0);
	return 0;
}
