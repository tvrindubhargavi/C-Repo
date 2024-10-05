#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int n=a+b+(a*b);
    if(n==111){
        printf("Yes");
    }
    else{
        printf("No");
    }
}