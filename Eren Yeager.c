#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    int td;
    td=(n/2)*(a+b)+(n%2)*b;
    printf("%d",td);
}