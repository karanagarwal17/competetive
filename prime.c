#include<stdio.h>
#include<math.h>

int isPrime(long int n){
	int i;
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	if (n%2 == 0)
		return 0;
	for (i=3;i<=sqrt(n);i+=2){
		if (n%i==0)
			return 0;
	}
	return 1;
}

int main() {
    long int i;
    for(i=0;i<10000000;i++){
      if(isPrime(i))
      printf("%ld,",i);
    }
    return 0;
}
