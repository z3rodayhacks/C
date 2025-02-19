#include <stdio.h>

int main() {
	int num;

	printf("Enter the temperature in celcius: ");
	scanf("%d", &num);

	printf("%d degree farenhiet converted from %d degree celcius" , num * 9/5 + 32, num);
	
	return 0; 
}
