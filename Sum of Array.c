#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=1;i<=n;i++){
      scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
}