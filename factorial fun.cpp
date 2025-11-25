#include<stdio.h>
int main()
{
int f=1,a=1,n;
printf("which factorial you want : ");
scanf("%d",&n);
while (a<=n)
{
f=f*a;
a++;
}
printf("\nfactorial of %d is %d",n,f);
}
