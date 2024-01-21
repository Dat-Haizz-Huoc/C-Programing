#include<stdio.h>
void mang(int array[], int arraysize);
int main()
{
	int n,i;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int array[n];
	//printf("Nhap %d gia tri cua mang: ",n);
	for(i=0;i<n;i++)
	{
		printf("Nhap thu %d gia tri cua mang: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("Mang ban dau:");
	for(i=0;i<n;i++)
	{
		printf("%4d",array[i]);
	}
	mang(array,n);
	return 0;
}
void mang(int array[],int arraysize)
{
	int temp;
	int k,i;
	for(k=0;k<arraysize;k++)
	{
		for(i=0;i<arraysize;i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	printf("\nPhan tu trong mang sau khi sap xep tang dan:");
	for(i=0;i<arraysize;i++)
	{
		printf("%4d",array[i]);
	}
}

