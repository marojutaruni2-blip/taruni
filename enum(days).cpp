#include<stdio.h>
enum days
{
	mon,tue,wed,thu,fri,sat,sun
};
int main()
{
	enum days d;
	d=wed;
	printf("\n %d",d);
	return 0;
}
