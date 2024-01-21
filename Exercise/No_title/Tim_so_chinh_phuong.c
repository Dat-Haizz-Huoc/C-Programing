/*Tim so chinh phuong trong doan [0;n]*/
#include<stdio.h>
#include<math.h>
int main()
{
   /* int n, i, z;
    do
    {
        printf("Nhap vao gia tri cua n:");
        scanf("%d",&n);
    } while (n<=0);
    for(i=1;i<=n;i++)
    {
        for(z=1;z<=i;z++)
        {
            if(z*z==i)
            {
                printf("%d La so chinh phuong thuoc doan [1;%d]\n",z,n);
            }
        }
    }
    return 0;*/
    int x,n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {int x=0;
    	for(x=1;x<=n/2;x++)
    	{
    	if(i==sqrt(x))
    	    {
    	        printf("%d",i);
            }
        }
	}
	return 0;
}
