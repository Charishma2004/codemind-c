#include<stdio.h>
int main()
{
    int n,c=0,dc=0,m=0,i,d,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n!=0)
        {
            d=n%10;
            n=n/10;
            dc++;
            s=0;
            for(i=1;i<=d;i++)
            {
                if(d%i==0)
                {
                    s++;
                }
            }
            if(s==2)
            {
                m++;
            }
        }
        if(m==dc)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}