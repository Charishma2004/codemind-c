#include<stdio.h>
int main()
{
    int n,arr[100],i,e=0,o=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            o=o+arr[i];
        }
        else
        {
            e=e+arr[i];
        }
    }
    if(o>e)
    {
        printf("%d",o-e);
    }
    else
    {
        printf("%d",e-o);
    }
}