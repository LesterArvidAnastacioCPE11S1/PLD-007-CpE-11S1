#include <stdio.h>

int main(void){
	int counter = 0;
	int total = 0;
	grade = float(input("Enter Grade: \n"));
	sentinel = -1
	
	while (grade != sentinel){
		total += grade;
		counter += 1

		grade = float(input("Enter a grade: \n"));
	}
	if(counter != 0){
		average = total/counter;
		printf("Class Average is: %f\n");
	}
	else {
		printf("Unspecified");
	}
	
	
	return 0;
}
