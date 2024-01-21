/*
Tinh a+b, x^y, n! bang cach su dung con tro
*/
#include<stdio.h>
void tong(int *aPtr, int *bPtr, int *sumPtr);
void luythua(int *xPtr, int *yPtr, int *muPtr);
void giaithua(int *nPtr, int *GIAITHUAPtr);
int main ()
{
	int a,b,x,y,n,sum,mu=1,GIAITHUA=1;
	//Nhap gia tri a, b
	printf("Nhap gia tri a:");
	scanf("%d",&a);
	printf("Nhap gia tri b:");
	scanf("%d",&b);
	tong(&a,&b,&sum);
	//Nhap gia tri x,y
	printf("Nhap gia tri x:");
	scanf("%d",&x);
	printf("Nhap gia tri y:");
	scanf("%d",&y);
	luythua(&x,&y,&mu);
	//Nhap gia tri n
	printf("Nhap gia tri n:");
	scanf("%d",&n);
	giaithua(&n, &GIAITHUA);
	printf("a+b = %d\n",sum);
	printf("x^y = %d\n",mu);
	printf("n! = %d\n",GIAITHUA);
	return 0;
}
void tong(int *aPtr, int *bPtr, int *sumPtr)
{
	*sumPtr=*aPtr+*bPtr;
	return *sumPtr;
}
void luythua(int *xPtr, int *yPtr, int *muPtr)
{
	int i;
	for(i=0;i<*yPtr;i++)
	{
		*muPtr=*muPtr**xPtr;
	}
	return *muPtr;
}
void giaithua(int *nPtr, int *GIAITHUAPtr)
{
	int i;
	for(i=1;i<=*nPtr;i++)
	{
		*GIAITHUAPtr=i**GIAITHUAPtr ;
	}
	return *GIAITHUAPtr;
}