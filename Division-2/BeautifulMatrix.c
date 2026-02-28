#include<stdio.h>
int main()
{ 
  int arr[5][5];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      scanf("%d",&arr[i][j]);
    }
  }int a,b;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(arr[i][j]==1){
         a=i;
         b=j;
        break;
      }
    }
  }
    if(a>2)a=a-2;
    else{a=2-a;}
    if(b>2)b=b-2;
    else{b=2-b;}
    printf("%d",a+b);
}