#include<stdio.h>
enum floor{
	ladies=1,men,children
};
int main()
{
	int choice;
	printf("\n enter your choice");
	scanf("%d",&choice);

switch(choice)
{
	case ladies:
		printf("\n goto first floor");
		break;
	case men:
	printf("\n enter second floor");
	break;
	case children:
		printf("\n enter third floor");
		break;
		default:
		printf(" enter wrong choice");
	
	
} 
return 0;
}
