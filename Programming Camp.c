#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    float td;
    td=2*y;
    float md;
    md=x*15;
    if(md>=td){
        printf("YES");
    }
    else{
        printf("NO");
    }
}