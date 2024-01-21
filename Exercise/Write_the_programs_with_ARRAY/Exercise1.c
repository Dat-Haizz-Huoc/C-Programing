/*****************************************************
Tao mang a va b, moi mang co 10 phan tu gom cac gia tri ngau nhien. 
tinh tong va tich cua mang a va mang b tai cac vi tri tuong ung va luu vao mang c va mang d
******************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i, a[10], b[10], c[10], d[10];
	
	//GIA TRI TU NHIEN THEO THOI GIAN
	//srand(time(NULL));
	
	//IN GIA TRI MANG a
	printf("---------------GIA TRI mang a:---------------\n");
	for(i=0;i<10;i++)
	{
		a[i]=rand();
		printf("a[%d] = %d\n",i+1,a[i]);
	}
	
	//IN GIA TRI MANG b
	printf("\n---------------GIA TRI mang b:---------------\n");
	for(i=0;i<10;i++)
	{
		b[i]=rand();
		printf("b[%d] = %d\n",i+1,b[i]);
	}
	
	//GAN TONG MANG a VA MANG b VAO MANG c
	printf("\n---------------TONG mang a & mang b:---------------\n");
	for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
		printf("c[%d] = a[%d] + b[%d] = %d\n",i+1,i+1,i+1,c[i]);
	}
	
	//GAN TICH MANG a VA MANG b VAO MANG d
	printf("\n---------------TICH mang a & mang b:---------------\n");
	for(i=0;i<10;i++)
	{
		d[i]=a[i]*b[i];
		printf("d[%d] = a[%d] + b[%d] = %d\n",i+1,i+1,i+1,d[i]);
	}
	return 0;
}
