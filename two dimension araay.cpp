#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c;
	printf("enter row and coloumn size");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n enter value at a[%d][%d]position:",i,j);
			scanf("%d ",&a[i][j]);
		}
        	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("\t %d",a[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}
