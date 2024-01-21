/*
Write a program using switch statement to calculate the weakly
salary of
• Manager (codeID = 1) with a fixed salary 240 USD/day. Inputs (entered by
user): number of working day.
• Hourly worker (codeID = 2) with 22 USD/hour for the first 40 hours and 1.5
times for overtime working. Inputs (entered by user): number of working hours in
a week.
• Commission worker (codeID = 3) with 250 USD/week plus 7.2% of their gross
weekly sale. Inputs (entered by user): weekly sale money
• Seller (codeID = 4) with a fixed incentive money for each selling item. Inputs
(entered by user): a fixed incentive money and number of selling items.
*/
#include<stdio.h>
int main()
{
	int codeid;
	double time, salary, profit, tienkhuyenkhich, sohangbanduoc;
	do
	{
	printf("\nNhap so 1 de chon Manager ");
	printf("\nNhap so 2 de chon Hourly worker ");
	printf("\nNhap so 3 de chon Commission worker ");
	printf("\nNhap so 4 de chon Seller ");
	printf("\nNhap CodeID: ");
	scanf("%d", &codeid);
    }
    while(codeid<=0 || codeid >4 );
	
	switch(codeid)
	{
		case 1:
			{
				printf("\nNhap vao so ngay lam viec cua Manager: ");
				scanf("%lf", &time);
				salary = 240*time;
				printf("\nLuong cua Manager la: %lf USD",salary);
				break;
			}
		case 2:
			{
				printf("\nNhap vao so gio lam viec trong tuan cua Hourly worker : ");
				scanf("%lf", &time);
				if(time<=40)
				{
					salary=time*22;
				}
				else
				{
					salary=22*40+(time-40)*1.5*22;
				}
				printf("\nLuong cua Hourly worker la: %lf USD",salary);
				break;
			}
		case 3:
			{
				printf("\nNhap vao so tien ban hang tuan cua Commission worker: " );
				scanf("%lf", &profit);
				salary= 250+(7.2/100)*profit;
				printf("\nLuong cua Commission worker la: %lf USD",salary);
				break;
			}
		case 4:
			{
				printf("\nNhap vao so tien khuyen khich co dinh cho Seller: " );
				scanf("%lf",&tienkhuyenkhich);
				printf("\nNhap vao so mat hang Seller ban duoc: " );
				scanf("%lf",&sohangbanduoc);
				salary= tienkhuyenkhich*sohangbanduoc;
				printf("\nLuong cua Seller la: %lf USD",salary);
				break;
			}
	}
	return 0;
}
