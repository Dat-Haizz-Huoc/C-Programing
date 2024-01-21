#include<stdio.h>
#include<string.h>
struct hoso
{
	char ten[50];
	unsigned int tuoi;
	float chieucao;
	float cannang;
	char nghenghiep[100];
};
int main()
{
	struct hoso dat={"Tan Dat",18,17,50,"hoc sinh"};
	dat.cannang=55;
	strcpy(dat.nghenghiep,"sinh vien");
	printf("Ho ten: %s\n",dat.ten);
	printf("Tuoi: %u\n",dat.tuoi);
	//Nhap chuoi trong C (khong the nhap nhu the nay duoc: dat.nghenghiep= "sinh vien")
	printf("Nghe nghiep sau khi tot nghiep:");
	gets(dat.nghenghiep);
	printf("Nghe nghiep sau khi tot nghiep:%s",dat.nghenghiep);
	
}