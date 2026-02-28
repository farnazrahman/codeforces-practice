#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        char arr[n+1];
        scanf("%s",arr);
        int count1[26]={0};
        int count2[26]={0};
        for(int i=0;i<n;i++)    {
            if(arr[i]>='A' && arr[i]<='Z'){
                count1[arr[i]-'A']++;
            }
            else{
                count2[arr[i]-'a']++;
            
            }
        }int pair=0;
        int extra=0;
        for(int i=0;i<26;i++){
            if(count1[i]>=count2[i]){
                pair +=count2[i];
                extra +=(count1[i]-count2[i])/2;
            }else if(count2[i]>count1[i]){
                pair +=count1[i];
                extra +=(count2[i]-count1[i])/2;
            }
            }
            if(extra>=k){
                printf("%d\n",pair+k);
            }else if(extra<k){
                printf("%d\n",pair+extra);
            }
        }
    
}