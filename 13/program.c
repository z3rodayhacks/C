#include <stdio.h>

int main() {

	int n , i , flag = 0 ;
	printf("Enter a number : ");
	scanf("%d",&n);
	if ( n == 1  || n == 0 ){
		flag = 1;
	}
	for ( i = 2 ; i <= n /2 ; ++i){
		if ( n % i == 0 ){
			flag = 1 ;
			break;
		}
	}

	if ( flag == 0){
		printf("Value is prime : %d", n);
	}else {
		printf("Value is non prime: %d ", n);
	}




}
