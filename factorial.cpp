#include<stdio.h>
int main()
{
	int n,i,p=1;
	printf("emter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=p*i;
	}
	printf("\n %d factorial is %d",n,p);
	
}
