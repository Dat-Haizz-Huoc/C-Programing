/*
de bai: e = 1 + 1/1! + 1/2! +...+1/n!

*/
#include <stdio.h>
int main() 
{
    int n, i=1;
    double gt=1, a=1;
    printf("Nhap so nguyen n (n>0): ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("De kieu nhap n > 0 ma :(((");
    }
    else 
	{
    while(i<=n)
        {
        	a=a*i;
        	gt = gt + 1/a;
        	i++;	
		}
	}
        printf("Gia tri cua ham la: %lf", gt);
    return 0;
}
        
