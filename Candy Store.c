#include<stdio.h>
int main()
{
  int x,y;
  scanf("%d%d",&x,&y);
  int base,excess,total;
   if(y<=x){
    total=y;
   }
   else{
    base=x;
    excess=2*(y-x);
    total=base+excess;
   }
   printf("%d",total);

}