#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int time=0;
    while(y<x){
        time++;
        y+=time;
    }
    printf("%d",time);
}