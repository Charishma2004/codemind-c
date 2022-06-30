#include<stdio.h>
int main()
{
    int arr[100],n,i;
    float sum = 0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    avg = sum/n;
    printf("%0.2f",avg);
    return 0;
}