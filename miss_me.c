#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(long int);

int main(){
	long int t, count,i;
	scanf("%ld", &t);
	long int num,max;
 	while(t--){
		max = 0;
 		count = 0;
 		num = 0;
		char *str = (char*)malloc(100000*sizeof(char));
		scanf("%s", str);
		for(i=0; i<strlen(str)+1; i++){
			if(str[i] >= '0' && str[i] <= '9'){
				num *= 10;
				num += (int)(str[i] - '0');
			}
			else{
				if(isPrime(num)){
					count++;
					if(num>max)
						max = num;
				}
				num=0;
			}
		}
		printf("%ld %ld\n", count, max);
	}
	return 0;
}

int isPrime(long int n){
  int i;
	if(n==1)
		return 0;
  if (n==2)
    return 1;
  if (n%2==0)
    return 0;
  for (i=3;i<=(int)sqrt(n);i+=2){
    if (n%i==0)
      return 0;
	}
  return 1;
}
