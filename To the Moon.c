#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int f=0,a=0;
    for(i=0; i<n;i++){
        if(str[i]=='1'){
            f++;
        }
        else if (str[i]=='0') {
            a++;
        }
    }
    if(f>a){
        printf("gogi_to_the_moon");
    }
    else{
        printf("kiddo");
    }
}