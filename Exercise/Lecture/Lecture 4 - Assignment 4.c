/*
de bai: Write a C program to collect the temperature in the garden. Your
program should:
a. input the temperature at 24 different times of the day. If the temperature is
higher than 44.30, the message “Caution! High temperature” will be showed.
b. determine and display the average temperature in a day.
c. find and print the largest temperature in a day.
d. find and print the second largest temperature in a day. Use the function to
complete this task.
*/


//-----------------------------------------------------------------CACH 1-----------------------------------------------------------------------------------------
#include <stdio.h>
int main()
{
	//NHAP DU LIEU
	double temp[1000];
	int i, a=1;
	for ( i = 0; i < 24; i++)
    {
        printf("\nNhap vao nhiet do luc %dh - %dh ( temp[%d] ): ", i, a, a);
        scanf("%lf", &temp[i]);
        if(temp[i]>44.30)
        printf("\n----------Caution! High temperature----------\n");
        a+=1;
    }
    //TINH TRUNG BINH 
	double trungbinh(double x[24])
    {
    	int i;
		double tong=0;
    	for( i=0;i<24;i++)
    	{
		tong+=x[i];
	    }
    	return tong/24;
	}
	printf("\nTrung binh nhiet do trong ngay la: %lf",trungbinh(temp));
    //TINH MAX
    double max(double x[24])
    {
    double max = x[0];
    int i;
    for (i = 0; i < 24; i++)
        if (max < x[i])
            max = x[i];
    return max;
    }
    //TINH MAX2
    double max2(double x[24])
    {
    double max, max2;
    int i;
    	for(i=0;i<24;i++)
    	{
    		if(x[i]!=max)
    		{
    			max2=x[i];
			}
		}
		for(i=0;i<24;i++)
		{
			if(x[i]>max2 && x[i]!=max)
			{
				max2=x[i];
			}
		}
		return max2;
	}
    printf("\nNhiet do cao nhat trong ngay la: %lf", max(temp));
    printf("\nNhiet do cao thu hai trong ngay la: %lf", max2(temp));
    
			
	return 0;
}
/*
//-----------------------------------------------------------------CACH 2-----------------------------------------------------------------------------------------
#include <stdio.h>
    //TINH TRUNG BINH
	double trungbinh(double temp[24])
    {
    	int i;
		double trungbinh=0;
    	for( i=1;i<=24;i++)
    	{
		trungbinh=(trungbinh+temp[i]);
	    }
	    trungbinh=trungbinh/24;
    	return trungbinh;
	}
	//TINH MAX
    double max(double temp[24])
    {
    double max = temp[1];
    int i;
    for (i = 1; i <=24; i++)
    {
        if (max < temp[i])
        {
            max = temp[i];
        }
    }
    return max;
    }
    //TINH MAX2
    double max2(double (temp[24]))
    {
    double max, max2;
    int i;
    	for(i=1;i<=24;i++)
    	{
    		if(temp[i]!=max)
    		{
    			max2=temp[i];
			}
		}
		for(i=1;i<=24;i++)
		{
			if(temp[i]>max2 && temp[i]!=max)
			{
				max2=temp[i];
			}
		}
		return max2;
	}
int main()
{
	//NHAP DU LIEU
	double temp[24];
	int i;
	for ( i = 1; i <= 24; i++)
    {
        printf("\nNhap vao nhiet do luc %dh: ", i );
        scanf("%lf", &temp[i]);
        if(temp[i]>44.30)
        printf("\n----------Caution! High temperature----------\n");
    }
    printf("\nTrung binh nhiet do trong ngay la: %lf",trungbinh(temp));
    printf("\nNhiet do cao nhat trong ngay la: %lf", max(temp));
    printf("\nNhiet do cao thu hai trong ngay la: %lf", max2(temp));
    return 0;
}
*/
