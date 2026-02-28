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
        int count =0;
        int parity1=0;
        int parity2=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=(i%2))
            {
                count++;
                if(arr[i]%2==0)parity1++;
                else{parity2++;}
        }
    }  
 
        if(count %2 != 0){
            printf("-1\n");
        }
        else{
            if(parity1==parity2){
          printf("%d\n",count/2);}
          else{
            printf("-1\n");
          }
        }
    }
}