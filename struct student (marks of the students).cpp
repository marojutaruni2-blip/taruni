#include<stdio.h>
struct student
{
int marks;
};
int main()
{
int n,i,count=0;
struct student s[100];
printf("no of students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter marks of the student %d",i+1);
	scanf("%d",&s[i].marks);
	if(s[i].marks >50){
	count++;}
}
printf("the number of students above 50 marks %d",count);
return 0;
}
