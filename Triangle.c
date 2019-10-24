#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("Enter three sides :");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x=(a==b)&&(a==c);
    printf("Triangle if equilateral if 1 and scalene if 0 :%d",x);
}
