/*
Write a program using function to calculate 
a) circumference with radius (entered by user as float type) 
*/
#include <stdio.h>
float circumference(float r);
int main ()
{
	float r;
	printf("Nhap ban kinh:");
	scanf("%f", &r);
	printf("Chu vi la: %f",circumference(r));
	return 0;
}
float circumference(float r)
{
	float chuvi, pi=3.14;
	chuvi = 2*pi*r;
	return chuvi;
}

