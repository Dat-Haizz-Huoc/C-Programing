/**********************************************
Tao mang a gom 100 phan tu ngau nhien. Tim va in ra cac phan tu trong mang:
a)la cac so nguyen to
b)la so chinh phuong
c)la so chia het cho 3
***********************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int i, a[100];
	
	//GIA TRI TU NHIEN THEO THOI GIAN
	//srand(time(NULL));
	
	//KHOI TAO 100 GIA TRI NGAU NHIEN CHO MANG a
	printf("\n\t----------------------GIA TRI MANG a LA:----------------------\n");
	for(i=0;i<100;i++)
	{
		a[i]=rand();
		printf("a[%d]\t=\t%d\n",i+1,a[i]);
	}
	
	//TIM SO NGUYEN TO TRONG MANG a
	printf("\n\t----------------------CAC SO NGUYEN TO TRONG MANG a LA:----------------------\n");
    for(i=0;i<100;i++)
	{
		int kiemtra1=0, x;
        for(x=2;x<a[i]/2;x++)
        {
            if(a[i]%x==0 && a[i]!=x)
            {
                kiemtra1=1;
            }
        }
	    if(kiemtra1==0 && a[i]!=0 && a[i]!=1)
	    {
		    printf("a[%d]\t=\t%d \t\t\t\tLA SO NGUYEN TO\n",i+1,a[i]);
		}
	    else
	    {
	        printf("a[%d]\t=\t%d \t\t\t\tKHONG PHAI LA SO NGUYEN TO\n",i+1,a[i]);
		}
    } 
    
    //TIM SO CHINH PHUONG TRONG MANG a
    printf("\n\t----------------------CAC SO CHINH PHUONG TRONG MANG a LA:----------------------\n");
    for(i=0;i<100;i++)
    {
    	int y, kiemtra2=0;
    	for(y=0;y<a[i];y++)
    	{
    	      if(y*y==a[i])
    	        {
			        kiemtra2=1;
			    }
		}
		if(kiemtra2=0)
    		{
    			printf("a[%d]\t=\t%d \t\t\t\tLA SO CHINH PHUONG\n",i+1,a[i]);
			}
			else
			{
				printf("a[%d]\t=\t%d \t\t\t\tKHONG PHAI LA SO CHINH PHUONG\n",i+1,a[i]);
			}
	}
	
	//TIM SO CHIA HET CHO 3 TRONG MANG a
	printf("\n\t----------------------CAC SO CHIA HET CHO 3 TRONG MANG a LA:----------------------\n");
	for(i=0;i<100;i++)
	{
		if(a[i]%3==0)
		{
			printf("a[%d]\t=\t%d \t\t\t\tLA SO CHIA HET CHO 3\n",i+1,a[i]);
		}
		else
		{
		    printf("a[%d]\t=\t%d \t\t\t\tLA SO KHONG CHIA HET CHO 3\n",i+1,a[i]);	
		}
	}
	return 0;
}
