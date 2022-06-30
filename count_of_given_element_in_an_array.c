#include<stdio.h>
int main()
{
    int arr[100],n,ele,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}