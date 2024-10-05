#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n-(n*0.1)<m){
        printf("ONLINE");
    }
    else if(n-(n*0.1)>m){
        printf("DINING");
    }
    else{
        printf("EITHER");
    }
}