#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int l=0,i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            l++;
        }
    }
    printf("%d",l);
}