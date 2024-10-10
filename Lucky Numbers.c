#include<stdio.h>
int islucky(int n){
    while (n>0){
        if(n%10==7){
            return 1;
        }
        n/=10;
    }
    return 0;
}
int main()
{
    int x;
    scanf("%d",&x);
    if(islucky(x)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}