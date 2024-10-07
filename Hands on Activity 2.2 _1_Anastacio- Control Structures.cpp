#include <stdio.h>

int main(void){
	int age;
	float fare;
	float discount;
	int minimum = 9;
	const float senior = 10.0;
	const float student = 8.0;
	
	printf("Thank you for choosing Travel+, to proceed please state your age: \n");
	scanf("%d", &age);
	
	
	if(age >= 60){
	
		discount = (senior/100)*minimum;
		fare = minimum - discount;
		printf("As for you are a Senior, you will have a 10 percent discount and your fare will now be %f\n pesos", fare);
	}
	else if(age <=18){
 
		discount = (student/100)*minimum;
		fare = minimum - discount;
		printf("As for you are age of a Student, you will have a 8 percent discount and your fare will now be %f\n pesos", fare);
	}
	else {
		printf("Please pay the fare of: %d pesos\n", minimum);
	}
	
	return 0;
}
