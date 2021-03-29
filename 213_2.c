#include<stdio.h>
int main()
{
    int n,i,j=0,c=0,count1=1,k[1],count2=1;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[0]==a[i+1])
        {
            a[i+1]=0;
            count1++;
        }
    }
    a[0]=0;
     for(i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            k[i]=a[i];
                if(a[i]==a[i+1])
                {
                    a[i]=0;
                    count2++;
            }
        }
    }
    if(count1>count2)
    {
        printf("%d",b[0]);
    }
    else if(count1<count2)
    {
        printf("%d",k[0]);
    }
    else
    {
        if(count1>count2)
        {
            printf("%d %d",k[0],b[0]);
        }
        else
        {
            printf("%d %d",b[0],k[0]);
        }
    }
    return 0;
}
