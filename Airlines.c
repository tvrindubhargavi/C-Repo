#include<stdio.h>
int main()
{
  int x,y,z;
  scanf("%d%d%d",&x,&y,&z);
  int max_p=x*10;
  int booked_p=(y<max_p)?y:max_p;
  int t=booked_p*z;
  printf("%d",t);

}