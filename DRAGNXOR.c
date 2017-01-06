#include<stdio.h>

int binary(long int a){
  int count = 0;
  while(a != 0){
    if(a % 2 != 0){
      count ++;
      a--;
    }
    a/=2;
  }
  return count;
}

long int decimal(int a, int b){
  long int ans = 0;
  int i;
  for(i=0;i<b;i++){
    ans *= 2;
    if(i<a)
      ans ++;
  }
  return ans;
}

int main(){
  int t,n,i,j,temp;
  long int a,b;
  scanf("%d",&t);
  while(t--){
    scanf("%d %ld %ld",&n,&a,&b);
    i = binary(a);
    j = binary(b);
    if(i+j > n){
      temp = 2*n - i - j;
    }
    else if(i + j == n){
      temp = n;
    }
    else {
      temp = i+j;
    }
    a = decimal(temp,n);
    printf("%ld\n",a);
  }
  return 0;
}
