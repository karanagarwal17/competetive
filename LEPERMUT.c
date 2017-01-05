#include<stdio.h>

int main(){
  int t,i,j,n,a[100],max,flag;
  scanf("%d",&t);
  while(t--){
    flag = 0;
    max = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      if(a[i]>max)
        max = a[i];
    }
    for(i=0;i<n;i++){
      for(j=i+2;j<n;j++){
        if(a[i] > a[j]){
          flag = 1;
          printf("NO\n");
          break;
        }
      }
      if(flag == 1){
        break;
      }
    }
    if(flag != 1)
      printf("YES\n");
  }
  return 0;
}
