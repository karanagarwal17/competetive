#include<stdio.h>
#include<math.h>

int primecheck(int x){
  int i;
  for(i=2;i<=sqrt(x);i++){
    if(x%i == 0)
      return 0;
  }
  return 1;
}

int main(){
  int t,x,y,i,k;
  scanf("%d",&t);
  while(t--){
    i = 0;
    scanf("%d %d",&x,&y);
    x += y;
    k = x+1;
    while(1){
      i = primecheck(k);
      if(i == 1){
        break;
      }
      k++;
    }
    printf("%d\n",k-x);
  }
  return 0;
}
