/*
Viet chuong trinh: tao ra 1 mang voi n phan tu(n: nhap tu ban phim)
+ Nhap vao gia tri x, dem xem co bao nhieu gia tri trong mang nho hon gia tri cua x
+ Sap xep cac phan tu trong mang theo thu tu giam dan va tang dan
+ Chi ra cac phan tu so chan trong mang giam dan
+ Chi ra cac phan tu so le trong mang tang dan
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int arrayA[n];
	printf("Mang ban dau:");
	int i;
	for(i=0;i<n;i++)
	{
		arrayA[i]=1+rand()%100;
		printf("%4d",arrayA[i]);
	}
	int x, count=0;
	printf("\nNhap vao gia tri x:");
	scanf("%d",&x);
	printf("\nCac phan tu nho hon %d trong mang: ",x);
	for(i=0;i<n;i++)
	{
		if(arrayA[i]<x)
		{
			printf("%4d", arrayA[i]);
			count = count +1;
		}
    }
		printf("\nCo %d phan tu trong mang nho hon %d", count, x);
		//Sap xep tang dan
		int k, temp;//Khai bao bien tam thoi
		for(k=1;k<n;k++)
		{
			for(i=0;i<n-1;i++)
			{
				if(arrayA[i]>arrayA[i+1])
				{
					temp=arrayA[i];
					arrayA[i]=arrayA[i+1];
					arrayA[i+1]=temp;
				}
			}
		}
		//In mang sau khi sap xep
		printf("\nMang da sap xep tang dan:");
		for (i=0;i<n;i++)
		{
			printf("%4d",arrayA[i]);
		}
		//In ra cac phan tu so chan da sap xep tang dan
		printf("\nCac phan tu so le trong mang sap xep tang dan:");
		for (i=0;i<n;i++)
		{
			if(arrayA[i]%2!=0)
			{
			    printf("%4d",arrayA[i]);
			}
		}
		//Sap xep giam dan
		int arrayB[n];
		printf("\nMang da sap xep giam dan:");
		for(i=0;i<n;i++)
		{
			arrayB[i]=arrayA[n-1-i];
			printf("%4d",arrayB[i]);
		}
		//In ra cac phan tu so le trong mang da sap xep giam dan
		printf("\nCac phan tu so chan trong mang sap xep giam dan:");
		for(i=0;i<n;i++)
		{
			if(arrayB[i]%2==0)
			{
				printf("%4d",arrayB[i]);
			}
		}
		return 0;
}
