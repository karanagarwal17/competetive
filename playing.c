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
  count %= 2;
  return count;
}

int main(){
  long int t,temp;
  long long int l,r,count;
  scanf("%ld",&t);
  while(t--){
    count = 0;
    scanf("%lld %lld",&l,&r);
    if(l % 2 == 1){
      temp = binary(l);
      if(temp == 0)
        count ++;
      l++;
    }
    if(r % 2 == 0){
      temp = binary(r);
      if(temp == 0)
        count ++;
      r--;
    }
    count += ((r - l + 1)/2);
    printf("%lld\n",count%1000000007);
  }
  return 0;
}
