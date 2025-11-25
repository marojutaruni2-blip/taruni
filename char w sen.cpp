#include<stdio.h>
main()
{
	char ch;
	char w[1000];
	char sen[10000];
	printf("enter a single character:");
	scanf("%c",&ch);
	printf("\nenter a word:");
	scanf("%s",w);
	printf("\n enter the sentence:");
	scanf(" %[^\n]",sen);
	printf("%c\n%s\n%s",ch,w,sen);
}
