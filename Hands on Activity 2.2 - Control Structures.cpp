#include <stdio.h>

int main(void){
	int num1;
	int rem1;
	
	printf("Input Number: \n");
	scanf("%d", &num1);
	rem1 = num1 % 2;
	
	if(rem1 == 0)
		printf("The number %d is Even\n", num1);
	else
		printf("The Number %d is Odd\n", num1);
	
	
	return 0;
}
