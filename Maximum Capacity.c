#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int n;
    n=x*y;
    if(n<=500 && x<=8){
        printf("YES");
    }
    else{
        printf("NO");
    }
}