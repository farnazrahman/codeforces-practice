#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,k;
        scanf("%d %d %d",&n,&x,&k);
        int count=0;
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max)max=arr[i];
        }
        if(arr[x-1]==max){
            printf("Yes\n");
        }
        else{
            if(k>1){printf("YES\n");}
            else{printf("NO\n");}
        }
    }
}