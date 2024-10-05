#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    if (n%2==0){
    if(x>=(n/2)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    }
    else{
        if(x>=(n/2+1)){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}