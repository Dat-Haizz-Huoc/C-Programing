/*
Write a program using function to calculate
e) e^x (with x entered by user and 15 terms) (e^x = 1 + x/1! + x^2/2! + ... + x^n/n!)
*/
#include <stdio.h>
#include <math.h>
double emux(double x);
int main ()
{
	double x;
	printf("Nhap x:");
	scanf("%lf",&x);
	printf(" gia tri e^x la : %lf",emux(x));
	return 0;
}
double emux(double x)
{
	double gt=1,a=1;
	int i;
	for (i=1;i<15;++i)
	{
		a=a*i;
		gt=gt+pow(x,i)/a;
	}
	return gt;
}
