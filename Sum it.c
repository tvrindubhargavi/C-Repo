#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int n;
    n=a+b;
    if(n==c){
        printf("YES");
    }
    else{
        printf("NO");
    }
}