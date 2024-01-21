/*
de bai: tinh y = 1 - x/1! + x^2/2! - x^3/3! + x^4/4! +...+ x^9/9!
*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	int i, a=1, x;
	float gt=1;
	printf("NHAP GIA TRI X: ");
	scanf("%d",&x);
	for( i = 1; i<=9;i++)
	{
		a=a*i;
		gt=gt+pow(-1,i+2)*pow(x,i)/a;
	}
	printf("GIA TRI Y= %f",gt);
	return 0;
}*/
//------------------------------CACH 2-----------------------------------------------
#include <stdio.h>
float hammu(float x);
double giaithua(float x);
int main ()
{
	float x, kq=1;
	printf("Nhap x: ");
	scanf("%f, &x");
	int i, sign=-1;
	for(i =1;i<=9;i++)
	{
		kq+=sign*hammu(x)/giaithua(x);
		sign=-sign;
	}
	printf("Ket qua cua bieu thuc la: %f",kq);
	return 0;
}
float hammu(float x)
{
	float kq=1;
	int i;
	for(i=1;i<=9;i++)
	{
		kq*=x;
	}
	return kq;
}
double giaithua(float x)
{
	float kq=1;
	int i;
	for (i=1;i<=9;i++)
	{
		kq*=i;
	}
	return kq;
}
