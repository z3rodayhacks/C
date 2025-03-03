#include <stdio.h>

int main() {
	//int a; 
	//int b;
	//int c;
	int value;
	printf(" 1. Addition \n");
	printf(" 2. Subtraction \n");
	printf(" 3. Multiplication \n");
	printf(" 4. Divition \n");	
	printf("What DO you wanna perform: ");
	scanf("%d",&value);

	switch(value) {
	case 1 :
		int a;
		int b;
		int c;
		printf("Enter Value no. 1 for addition ");
		scanf("%d",&a);
		printf("ENter Value no. 2 for addition ");
		scanf("%d",&b);
		c = a + b;
		printf("The sum of %d and %d is :%d \n",a,b,c);
		break; 
	case 2 :
		int l;
		int m;
		int n;
		printf("Enter Value no. 1 for Subtraction ");
		scanf("%d",&l);
		printf("Enter Value no. 2 for Subtraction ");
		scanf("%d",&m);
		n = l - m;
		printf("The subtracted value of value %d and %d are :%d \n",l,m,n);
		break;
	case 3 :
		int x ;
		int y ;
		int z ;
		printf("Enter Value 1 for multiplication");
		scanf("%d",&x);
		printf("Enter Value 2 for multiplication");
		scanf("%d",&y);
		z = x*y;
		printf("The product of %d and %d is :%d \n", x, y,z);
		break;
	case 4:
		int d;
		int e;
		int f;
		printf("Enter Value 1 for divition ");
		scanf("%d",&d);
		printf("Enter value 2 for divition");
		scanf("%d",&e);
		f = d / e;
		printf("The divided value for the values %d and %d is : %d \n" , d,e,f);
		break;
	


	}
	return 0;






}
