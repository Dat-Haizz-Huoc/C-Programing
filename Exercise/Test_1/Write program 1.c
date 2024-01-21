/*
de bai: Nhap vao gia tri x, kiem tra x co phai la so nguyen to hay khong
*/
#include<stdio.h>
int main()
{
	int i,x,meow=1;
    do
	{
	printf("\nNHAP GIA TRI CUA X: ");
	scanf("%d",&x);
    }while (x==0 || x==1);
	for(i=2;i<x;i++)
	{
		if(x%i==0 && x!=i)
		{
		meow=0;
		}
	}
	if(meow==1)
	printf("\nX = %d LA SO NGUYEN TO",x);
	else
	printf("\nX = %d KHONG PHAI LA SO NGUYEN TO",x);
	return 0;
}
