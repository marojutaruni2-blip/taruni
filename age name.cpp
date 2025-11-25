#include<stdio.h>
main()
{
	int age;
	float weight;
	char gender;
	char name[200];
	printf("\n enter your name");
	scanf("%s",&name);
	printf("\n enter your age");
	scanf("%d",&age);
	printf("\nenter your weight");
	scanf("%f",&weight);
	printf("\nenter your gender");
	scanf(" %c",&gender);
	printf("\n%c\n%s\n%d\n%f",gender,name,age,weight);
}
