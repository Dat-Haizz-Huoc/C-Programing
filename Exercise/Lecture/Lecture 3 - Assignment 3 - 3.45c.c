/*
de bai: e^x = 1 + x/1! + x^2/2! + ... + x^n/n!
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double gt=1, a=1 ;
    int i,x,n;
    printf("nhap so nguyen x (x>0): ");
    scanf("%d", &x);
    printf("Nhap so nguyen n (n>0): ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("De kieu nhap n > 0 ma :(((");
    }
    if (x < 0)
    {
        printf("De kieu nhap x > 0 ma :(((");
    }
    else 
	{
        for(i=1;i<n;i++)
        {
        	a=a*i;
        	gt = gt + pow(x,i)/a;
        		
			/*
			i=1, gt=1+5/1
			i=2, gt=1+5/1+5*5/2
			i=3, gt=1+5/1+5*5/2+5*5*5/6
			*/
		}
        printf("Gia tri cua ham la: %lf", gt);
    }
    return 0;
}
