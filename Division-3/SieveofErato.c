#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
      int count=0;
      for(int i=0;i<n;i++){
            if(arr[i]==67){
            count=1;
            break;
            }
      }
     if(count==1){
        printf("YES\n");
     }
     else{
        printf("NO\n");
     }
}
return 0;
}