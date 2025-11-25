#include<stdio.h>
int main()
{
int n,r=0,rev=0;
printf("enter digit : ");
scanf("%d",&n);
int t=n;
while (n!=0)
{
r=n%10;
n=n/10;
rev=(rev*10)+r;
}
if (t==rev)
{
printf("given number (%d) is a palindrome",t);
}
else
{
printf("given number (%d) is not a palindrome",t);
}
return 0;
}
