#include <stdio.h>
int main()
{
int mangA[5]={1,2,3,4,5};
int mangB[5]={2,4,6,8,10};
int mangC[5];
int i=0;

//NHAP PHAN TU mangC
for (i=0;i<5;i++)
{
	printf("Nhap gia tri thu %d cua mangC:", i+1);
	scanf("%d",&mangC[i]);
}
int tong1=0,tong2=0, mangAB[5];

//TONG mangA
for(i=0;i<5;i++)
{
tong1=tong1+mangA[i];
}
printf("\nTong mangA = %d\n", tong1);

//TONG mangAB
for(i=0;i<5;i++)
{
mangAB[i]=mangA[i]+mangB[i];
printf("gia tri mangAB[%d]:%d\n",i,mangAB[i]);
}

//BINH PHUONG mangC va gan vao mangCx
int mangCx[5];
for(i=0;i<5;i++)
{
mangCx[i]=mangC[i]*mangC[i]	;
printf("gia tri mangCx[%d] la: %d\n",i,mangCx[i]);
}

//TIM SO NGUYEN TO mangC
for(i=0;i<5;i++)
{
int d;
int meow=1;
for(d=2;d<mangC[i]/2;d++)
{
if(mangC[i]%d==0 && mangC[i]!=d)
{
meow=0;
}
}
	if(meow==1 && mangC[i]!=0 && mangC[i]!=1)
	{printf("\nmangC[%d] = %d LA SO NGUYEN TO",i,mangC[i]);}
	else
	{printf("\nmangC[%d] = %d KHONG PHAI LA SO NGUYEN TO",i,mangC[i]);}
}
return 0;
}
