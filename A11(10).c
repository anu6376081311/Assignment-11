#include<stdio.h>
int main()
{
    int i, sum =0;;
    for(i=1;i<=5;i++)
    {
      sum=sum+fact(i)/i;
    }
   printf("%d",sum);
}
int fact(int n)
{
    int i=1,fact=1;
    for(i;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

