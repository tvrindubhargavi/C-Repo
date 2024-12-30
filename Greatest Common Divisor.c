#include<stdio.h>
int main()
{
    int a,b,temp,rem;
    scanf("%d%d",&a,&b);
    if(b>a){
        temp=a;
        a=b;
        b=temp;
    }
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("%d",a);
}