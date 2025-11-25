#include<stdio.h>
int main()
{	
	int units;
	float amount, charges, totalamount;
	printf("\n enter no of values");
	scanf("%d",& units);
	if(units<=50)
	{
		amount= units*2.50;
		charges= 25;
	}
	else if(units<=100)
	{
		amount= units*3.00;
		charges= 50;
	}
	else if (units<=200)
	{
		amount= units*3.50;
		charges= 75;
	}
	else if (units<=300)
	{
		amount= units*4.00;
		charges= 100;
	}
	else if (units<=400);
	{
		amount= units*4.50;
		charges= 125;
	}
	totalamount=amount+charges;
	printf("\n total current bill %2f",totalamount);
}
