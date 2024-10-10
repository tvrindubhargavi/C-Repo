#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int max=1;
    int i;
    for(int i=n;i>1;i--){
        if(n%i==0 && m%i==0){
            max=i;
            break;
        }
    }
    printf("%d",max);
} 