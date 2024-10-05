#include<stdio.h>
int main()
{
    int b1,b2,b3;
    scanf("%d%d%d",&b1,&b2,&b3);
     if(b1==0 && b2==0 && b3==0){
        printf("Water filling time");
     }
    else if(b1==0 && b2==0 && b3==1){
        printf("Water filling time");
     }
     else if(b2==0 && b3==0 && b1==1){
        printf("Water filling time");
     }
    else if(b3==0 && b1==0 && b2==1){
        printf("Water filling time");
     }
     else{
        printf("Not now");
     }
}