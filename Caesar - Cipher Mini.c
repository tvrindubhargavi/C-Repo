#include<stdio.h>
int main()
{
    char ch;
    int k;
    scanf("%c%d",&ch,&k);
    int new_position=((ch-'a')+k)%26;
    char result='a'+new_position;
    printf("%c",result);
}