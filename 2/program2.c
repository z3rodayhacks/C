#include <stdio.h>


int main() {
	int num1;
	int num2;
	int num3;

	printf("Enter value no.1: ");
	scanf("%d", &num1);

	printf("Enter value no.2: ");
	scanf("%d", &num2);

	printf("Enter value no.3: ");
	scanf("%d", &num3);

	if (num1 == num2 && num2 == num3 && num1 == num3) {
		printf("%d  %d %d is equal", num1,num2,num3);
	} else if (num1 > num2 && num1 > num3) { 
		printf("%d is greater" , num1);
	} else if (num1 < num2 && num2 > num3) {
		printf( "%d is greater",num2);
	} else if (num3 > num1 && num3 > num2 ) {
		printf("%d is greater" , num3);
	}

	return 0;
}
