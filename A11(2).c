#include<stdio.h>
int HCF(int,int);
int main()
{
    int x,y,p;
    printf("Enter two number :");
    scanf("%d %d",&x,&y);
    p=HCF(x,y);
    printf("The Hcf of two number is %d",p);
    return 0;

}
int HCF(int a,int b)
{
    int min;
    min=(a<b) ? a:b;
    while(min>0)
    {
        if((a%min==0) && (b%min==0))
            break;
    }
    min--;
    return min;

}
