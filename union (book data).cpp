#include<stdio.h>
#include<string.h>
union book
{
	int pages;
	char name[20];
	float prize;	
};
int main()
{
union book b;
b.pages=195;
b.prize=499;
strcpy(b.name,"THE REVANGE OF THE GHOST");
printf("\nthe pages of the book %d",b.pages);
printf("\nthe name of the book %s",b.name);
printf("\nthe prize of the book %f",b.prize);
return 0;
}

