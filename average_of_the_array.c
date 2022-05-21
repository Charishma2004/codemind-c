#include<stdio.h>
int main()
{
    int n,i;
    float arr[100],s=0,avg;
    while(n>100 || n<1)
    {
        scanf("%d",&n);
    }
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        s=s+arr[i];
    }
    avg=s/n;
    printf("%.2f",avg);
}