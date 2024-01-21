#include<stdio.h>
int main()
{
	int a=10, b=20, *p1=&a, *p2=&b;
	printf ("Before swap: *p1=%d *p2=%d\n",*p1,*p2);
	*p1= *p1+*p2;//30=*p1
	*p2= *p1-*p2;//10=*p2
	*p1= *p1-*p2;//20=*p1
	printf("After swap: *p1=%d *p2=%d\n",*p1, *p2);
	return 0;
}