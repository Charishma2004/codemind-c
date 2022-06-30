#include<stdio.h>
int main()
{
    int arr[100],n,i,odd,ind;
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
            ind=i;
        }
    }
    printf("%d",ind);
}