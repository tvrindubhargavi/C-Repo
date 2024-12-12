#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    char s[100];
strcpy(s,str);
printf("%s",s);
}