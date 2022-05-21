#include<stdio.h>
int linear_search(int n,int*arr,int avrg)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(avrg==arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,arr[100],avrg,s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    avrg=s/n;
    if(linear_search(n,arr,avrg))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}