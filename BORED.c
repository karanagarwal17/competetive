#include<stdio.h>

int main(){
  int t,n,i,x,max,count;
  scanf("%d",&t);
  while(t--){
    max = 0;
    count = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&x);
      if( x > max){
        max = x;
        count = 0;
      }
      else{
        count++;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}
