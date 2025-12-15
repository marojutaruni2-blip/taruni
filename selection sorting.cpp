#include<stdio.h>
int main()
{
	int n,i,j,a[100],temp;
	printf("enter array size");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	printf("\n enter value at a[%d] position",i);
	scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
    }
    for(i=0;i<n;i++)
    {
	printf("\t the sorting value %d",a[i]);
    }

return 0;
}
