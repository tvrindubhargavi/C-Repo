#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int n;
    if(y>=0.75*x){
        printf("ELIGIBLE");
    }
    else{
        printf("NOT ELIGIBLE");
    }
}