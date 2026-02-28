#include<stdio.h>
int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int k,x;
        scanf("%d %d",&k,&x);
        for(int i=k;i>0;i--){
            x=x*2;
        }printf("%d\n",x);
    }
    return 0;
}