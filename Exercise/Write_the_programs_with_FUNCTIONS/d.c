/*
Write a program using function to calculate
d) constant e (with 15 terms) (e = 1 + 1/1! + 1/2! +...+1/n!)
*/
#include <stdio.h>
float constante(float x);
int main()
{
	float x;
	/*printf("Nhap x: ");
	scanf("%f",&x);*/
	printf("ket qua = %f",constante(x));
	return 0;
}
float constante(float x)
{
	double a=1, gt=1;
	int i;
	for(i=1;i<15;i++)
	{
		a=a*i;
		gt=gt+1/a;
		
	}
	return gt;
}
