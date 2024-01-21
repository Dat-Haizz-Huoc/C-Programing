/*
Write a program using function to calculate
b) volume of cylinder with radius and height (entered by users as float type)
*/
#include <stdio.h>
float thetichhinhtru(float r, float h);
int main()
{
	float r,h;
	printf("Nhap vao ban kinh cua hinh tru:");
	scanf("%f", &r);
	printf("Nhap vao chieu cao cua hinh tru: ");
	scanf("%f",&h);
	printf("The tich hinh tru la: %f",thetichhinhtru(r,h));
	return 0;
}
float thetichhinhtru(float r, float h)
{
	float thetich,pi=3.14;
	thetich = pi*r*r*h;
	return thetich;
}
