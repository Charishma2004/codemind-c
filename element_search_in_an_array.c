#include<stdio.h>
int main()
{
    int n,a[100],i,m,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            found++;
            break;
        }
    }
    if(found==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}