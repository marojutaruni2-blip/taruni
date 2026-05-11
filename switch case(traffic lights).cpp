#include<stdio.h>
enum lights
{
	green,red,orange
};
int main()
{
	int choice;
	printf("\n enter your choice");
	scanf("%d",&choice);
	switch (choice)
    {
	case green:
	printf(" you can go");
	break;
	case red:
	printf("stop");
	break;
	case orange:
	printf("ready to go");
	break;
	default:
	printf("enter wrong choice");
	
}
return 0;
}
