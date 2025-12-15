#include<stdio.h>
int main()
{
	int a[100],i,n,low,high,mid,search,found=0;
	printf("\n enter array size");
	scanf("%d",&n);
	printf("\n enter %d values into array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter searching value");
	sacnf("%d",&search);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(search==a[mid])
		{
			printf("\nsearching element found at %d element");
			
		}
		else if(search<a[mid])
		{
			high=mid-1;
		}
		else if("\n not found");
		if(found==0)
		{
			printf("\n element not found");
			
		}
	}}
