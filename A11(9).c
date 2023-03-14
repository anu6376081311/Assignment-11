#include<stdio.h>
int squre(int);
int main()
{
    int x;
    printf("enter anumber :");
    scanf("%d",&x);
    squre(x);
    printf("%d",squre(x));
    return 0;

}
int squre(int n)
{
    int sq;
    sq=n*n;
    return sq;
}




