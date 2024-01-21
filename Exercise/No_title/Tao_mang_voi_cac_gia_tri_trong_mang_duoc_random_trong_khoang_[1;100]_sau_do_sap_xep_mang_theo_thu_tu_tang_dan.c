/*
Tao mang voi cac gia tri trong mang duoc random trong khoang [1;100] sau do sap xep mang theo thu tu tang dan
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i;
	printf("Nhap n(n la so phan tu trong mang):");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		array[i]=1+rand()%100;//Tao mang voi gia tri ngau nhien trong [1;100]
    }
	printf("Gia tri mang ban dau:\n");
    for(i=0;i<n;i++)
    {
    	printf("%4d",array[i]);
	}
	//Sap xep tang dan
	int temp, k;
	for(k=1;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	printf("\nGia tri mang sau khi sap xep tang dan:\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",array[i]);
	}
    return 0;
}
