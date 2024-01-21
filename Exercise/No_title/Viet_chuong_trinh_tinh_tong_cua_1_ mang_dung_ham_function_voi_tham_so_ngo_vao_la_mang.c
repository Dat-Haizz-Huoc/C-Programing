/*
Viet chuong trinh tinh tong cua 1 mang dung ham function voi tham so ngo vao la mang
*/
#include<stdio.h>
#include<math.h>
int sumarray (int array[], int size);
float averagearray(int array[], int size);
int main()
{
	int i=0, sum, size=9, array[]={1,2,3,4,5,6,7,8,9};
	float average;
	sum=sumarray(array, size);
	average=averagearray(array, size);
	printf("Tong mang la: %d",sum);
	printf("\nTrung binh mang la: %f",average);
	return 0;
}
//TINH TONG
int sumarray(int array[], int size)
{
	int i, sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
	return sum;
}
//TINH TRUNG BINH
float averagearray(int array[], int size)
{
	float sum=0;
	int i;
	float average=0;
	for(i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
	average = sum/size;
	return average;
}
