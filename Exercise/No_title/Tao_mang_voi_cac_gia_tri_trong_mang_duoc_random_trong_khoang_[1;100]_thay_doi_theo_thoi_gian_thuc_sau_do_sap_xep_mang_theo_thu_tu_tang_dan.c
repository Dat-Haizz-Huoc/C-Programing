/*
Tao mang voi cac gia tri trong mang duoc random trong khoang [1;100] thay doi theo thoi gian thuc sau do sap xep mang theo thu tu tang dan
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void softArray(int array[], int arraySize);
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
	softArray(arrayA,n);
	return 0;
}
void softArray(int array[],int arraySize)
{
	int temp;
	int k,i;
	for(k=0;k<arraySize;k++)
	{
		for(i=0;i<arraySize;i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	printf("\nPhan tu trong mang sau khi sap xep:");
	for(i=0;i<arraySize;i++)
	{
		printf("%4d",array[i]);
	}
}

