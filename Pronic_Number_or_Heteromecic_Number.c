#include<stdio.h>
int function(int n)
{
    int i,f=0;
for(i=1;i<=n;i++)
   {
       if(i*(i+1)==n)
       {
           f=true;
           break;
       }
   }
   return f;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    if(function(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}