#include<stdio.h>
int main()
{
    int i,j,k,n,c,a;
    scanf("%d %d",&n,&c);
    a=n;
    i=n%10;
    if(n>0&&n<32750)
    {
        if(i<=4)
        {
            for(j=1; j<=4; j++)
            {
                if(j-i==0)
                {
                    break;
                }
            }
            printf("%d",(a-j)+c);
        }

        else
        {
            for(j=1; j<=5; j++)
            {
                if(j+i==10)
                {
                    break;
                }
            }
            printf("%d",(a+j)+c);
        }
    }

    return 0;
}
