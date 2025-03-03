#include <stdio.h>
int main() {
	long long n;
	int count = 0;
	printf("Enter an INTEGER: : ");
	scanf("%lld", &n);
	

	do {
		n /= 10;
		++count;
		}while(n != 0 );

	printf("Number for values in the integer:%d ", count);
	return 0;
}
