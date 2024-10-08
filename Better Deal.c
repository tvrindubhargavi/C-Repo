#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=100-a;
    int y=200-2*b;
    if(x<y){
        printf("FIRST");
    }
    else if(y<x){
        printf("SECOND");
    }
    else{
        printf("BOTH");
    }
}