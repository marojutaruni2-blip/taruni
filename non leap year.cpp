#include<stdio.h>
int main()
{
	int year;
	printf("\n enter year");
	scanf("%d",&year);
	if(year%4==0 && year %100==0 || year % 4==0 )
	{
		printf("\n leap year");
	}
	else
	{
		printf(" \nnot a leap year");
	}
	
}
