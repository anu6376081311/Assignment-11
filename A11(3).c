#include<stdio.h>
int prime(int);
int main()
{
    int x,p;
    printf("Enter a number :");
    scanf("%d",&x);
    p=prime(x);
    printf("%d",p);
    return 0;

}
int prime(int n)
{
    int c;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
    {
        return prime;
    }
    else
    {
        return 0;
    }
}
