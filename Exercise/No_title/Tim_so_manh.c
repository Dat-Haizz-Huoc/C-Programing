/*Tim so manh trong doan [1;n].(so manh(strong number) la so vua chia het cho so nguyen to vua chia het cho binh phuong cua so nguyen to do)*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, a;
     do
    {
        printf("Nhap vao gia tri cua n:");
        scanf("%d",&n);
    } while (n<=1);
    for(a=1;a<=n;a++)
    {
    	int x, kiemtra1=0;
        for(i=2;i<=n;i++)
	    {
		    int x, kiemtra1=0;
            for(x=1;x<=n;x++)
            {
                if(i%x==0 && i!=x)
                {
                    kiemtra1=1;
                }
            }
	        if(kiemtra1==0 && a%(i*i)==0)
	        {
		        printf("a=%d LA SO MANH\n",a);
		    }
	        /*else
	        {
	            printf("a=%d KHONG PHAI LA SO MANH\n",a);break;
		    }*/
        }
    }
    return 0;
}
