#include<stdio.h>
int main()
{
    char str[10000];
    fgets(str,10000,stdin);
    printf("Hello Technicalhub\n");
    printf("%s",str);
}