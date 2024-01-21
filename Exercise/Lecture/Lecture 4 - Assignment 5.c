/*
de bai: x - x^3 + x^5 - x^7 + x^9 - x^11...
        |................|     |
              4 term         1 term  
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int i, x, term, sum = 0, mux, n = 0;
	printf("Nhap gia tri x:");
	scanf("%d",&x);
	printf("Nhap so lan (term): ");
	scanf("%d",&term);
	for (i = 1; i <= term; i++) 
    {
        mux = 2*n+1;
        sum = sum + pow(-1,i+1)*pow(x, mux);
        n = n + 1;
	}
	printf("Tong = %d",sum);
	return 0;
}
