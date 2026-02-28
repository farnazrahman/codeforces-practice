#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        int count=0;
        for(int i=x+1;i<=x+90;i++){
              int sum=0;
              int n=i;
              while(n!=0){
                int p=n%10;
                sum=sum+p;
                n=n/10;
              }
              if(i-sum==x)count++;
        }
       printf("%d\n",count);
 
    }
}