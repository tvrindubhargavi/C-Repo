#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,y,sum;
    x=n/10;
    y=n%100;
    sum=x+y;
    printf("%d",sum);
}

