#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    for(i=0;i<n;i++){
        if(arr[i]==1 || arr[i]==0){
           cnt++; 
        }
    }
    if(cnt==n){
        printf("True");
    }
    else{
        printf("False");
    }
}