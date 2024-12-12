#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int l=0,i;
for(i=1;str[i]!=0;i++){
    l++;
}
printf("%d",l);
}