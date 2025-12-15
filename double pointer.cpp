#include<stdio.h>
int main()
{
int a=10,*ptr,**dptr;
ptr=&a;
dptr=&ptr;
printf("\n the address of ptr %x",&ptr);
printf("\n the value of dptr %x",dptr);
printf("\n the value of a %d ",a);
printf("\n the ptr pointing value %d",*ptr);
printf("\n the dptr pointing value %d",**dptr);
}
