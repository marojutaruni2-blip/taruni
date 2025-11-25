#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,total;
	float average;
	printf("enter s1,s2,s3,s4,s5 subjects");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	average=(total/5);
	printf("the sum of 5 subjects is%d",total);
	printf("the average of all subjects is %f",average);
	
}
