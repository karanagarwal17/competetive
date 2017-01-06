#include<stdio.h>

int main(){
  int t,i,temp;
  char a[26],b[100];
  scanf("%d",&t);
  scanf("%s",a);
  while (t--){
    scanf("%s",b);
    for(i=0 ; b[i]!='\0' ; i++){
      if(b[i] <= 'z' && b[i] >= 'a'){
        temp = b[i] - 'a';
        b[i] = a[temp];
        printf("%c",b[i]);
      }
      else if(b[i] <= 'Z' && b[i] >= 'A'){
        temp = b[i] - 'A';
        b[i] = a[temp];
        b[i] -= 32;
        printf("%c",b[i]);
      }
      else if(b[i] == '_'){
        printf(" ");
      }
      else {
        printf("%c",b[i]);
      }
    }
    printf("\n");
  }
  return 0;
}
