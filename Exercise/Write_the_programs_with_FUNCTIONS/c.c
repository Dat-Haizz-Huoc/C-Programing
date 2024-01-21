/*
Write a program using function to calculate
c) factorial of integer x (entered by user)
*/
#include <stdio.h>
float factorial(float x);
int main()
{
	float x;
	printf ("Nhap vao x:");
	scanf("%f",&x);
	printf ("Giai thua cua x la: %f",factorial(x));
	return 0;
}
float factorial(float x)
{
	float i,a=1;
	for (i=1;i<=x;i++)
	{
		a=a*i;
	}
	return a;
}

