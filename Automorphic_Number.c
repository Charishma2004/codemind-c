#include<stdio.h>
int main()
{
    int n,sq,temp,p=1;
    scanf("%d",&n);
    sq=n*n;
    temp=n;
    while(n!=0)
    {
        n=n/10;
        p=p*10;
    }
    if(sq%p==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}