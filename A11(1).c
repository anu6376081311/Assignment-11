#include<stdio.h>
int LCM(int int);
int main()
{
    int a,b,c;
    printf("enter the value of a and b :");
    scanf("%d %d",&a,&b);
    c=LCM(a,b);
    printf("The is %d",c);
    return 0;
}

int LCM(int x,int y)
{
    int x,y,max;
    max=(x>y) ? x:y;
    while(1)
        {
          if((max%x==0) && (max%y==0))
           {
             return max;
            break;
           }
          ++max;
        }
}
