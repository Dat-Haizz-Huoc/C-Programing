/*
de bai: tinh n!
*/
#include <stdio.h>
int main() 
{
    unsigned long int n, i;
    unsigned long int gt=1;
    printf("Nhap so nguyen n (n>0): ");
    scanf("%lu", &n);
    if (n < 0)
    {
        printf("De kieu nhap n > 0 ma :(((");
    }
    else 
	{
        for (i = 1; i <= n; i++) 
		{
            gt =gt*i;//gt*=i
            //VD 5!= ?
			//i=1 => gt=1
            //i=2 => gt=2
            //i=3 => gt=6
            //i=4 => gt=24
            //i=5 => gt=120
        }
        printf("%lu! = %lu",n, gt);
    }
    

    return 0;
}
