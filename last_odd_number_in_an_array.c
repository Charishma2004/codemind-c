#include<stdio.h>
int main()
{
    int arr[100],n,i,odd;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            odd = arr[i];
        }
    }
    printf("%d",odd);
}