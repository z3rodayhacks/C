#include <stdio.h>

int main() {
	

	int a;
	int b;
	int c;

	printf("Enter the value 1 : ");
	scanf("%d", &a);
	printf("Enter the value 2 : ");
	scanf("%d" , &b);
	c = a && b; 
	printf("The value is : %d \n" ,c);
	c = a || b;
	printf("The value is : %d \n" , c);
	c = a != b;
	printf("The value is : %d \n ", c);
	


	return 0;
}
