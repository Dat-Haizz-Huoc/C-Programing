/*
de bai: in ra cac nam nhuan cho den nam duoc nhap vao
*/
#include <stdio.h>
int main()
{
	unsigned int year;
	int i;
	printf("Nhap nam:");
	scanf("%d", &year);
	printf("Nhung nam nhuan tinh den nam %d la: \n ", year);
	for( i=1; i<=year; i++)
	{
	    if(i%400==0)
	        {
			   printf(" Nam %d\n", i);
	        }
	    if(i%4==0 && i%100!=0)
	        {  
	           printf(" Nam %d\n", i);
	        }
    }
	return 0;
	
}
