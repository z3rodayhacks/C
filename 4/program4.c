#include <stdio.h> 

int main() {
	
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age > 18 ) {
		printf("Your eligible to vote . Your age %d ", age) ;
	} else if (age < 18 && age > 3) {
		printf("Your Not eligible to vote . Your Age %d" , age);
	} else if (age <= 2 && age != 0) {
		printf("BROOOOO SERIOUSLY ????? You WERE LITERALLY BORN LAST YEAR");
	} else if (age == 0) {
		printf("OK AT THIS POINT IM JUST QUITTING MY LIFE");
	}

	return 0 ;
}
