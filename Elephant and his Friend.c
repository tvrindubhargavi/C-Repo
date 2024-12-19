#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int n;
    if(x%5==0){
n=x/5;
    }
    else{
        n=(x/5)+1;
    }
    printf("%d",n);
}