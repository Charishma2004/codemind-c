#include<stdio.h>
int main()
{
    int a,b,i,j,s=0,c=0,k;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        {
            c=c+j;
        }
    }
    if((a==c)&&(s==b))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}