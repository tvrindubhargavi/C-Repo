#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int n,z;
    n=pow(x,y);
    z=n%m;
    printf("%d",z);
}