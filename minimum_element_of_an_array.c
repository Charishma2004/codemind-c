#include<stdio.h>
int main()
{
    int n,arr[100],m=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<m)
        {
            m=arr[i];
        }
    }
    printf("%d",m);
}