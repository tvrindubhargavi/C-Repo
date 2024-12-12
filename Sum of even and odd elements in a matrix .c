#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int e=0,o=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]%2==0){
                e+=arr[i][j];
            }
            else{
                o+=arr[i][j];
            }
        }
    }
    printf("%d %d",e,o);
}