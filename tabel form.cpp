#include<stdio.h>
int main()
{
int n,m=1,o;
printf("enter which table you want ? ");
scanf("%d",&n);
while (m<=10)
{
o=n*m;
printf("\n%d×%d=%d",n,m,o);
m++;
}
return 0;
}
