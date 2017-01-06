#include<stdio.h>

int main() {
  int t,n,i,a[100],k,count;
  scanf("%d",&t);
  while(t--){
    count = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    k--;
    k = a[k];
    for(i=0;i<n;i++){
      if(a[i] < k)
        count++;
    }
    count+=1;
    printf("%d\n",count);
  }
  return 0;
}
