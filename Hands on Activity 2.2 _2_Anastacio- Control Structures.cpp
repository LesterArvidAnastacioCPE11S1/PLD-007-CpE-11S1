#include <stdio.h>

int main(void){
	int counter = 0;
	int grade,average;
	int total = 0;
	
	printf("Enter your Grade: \n");
	scanf("%d", &grade);
	
	while (grade != -1){
		total += grade;
		counter++;
		
		printf("Enter Grade: \n");
		scanf("%d\n",&grade);
	}
	if(counter != 0){
		average = (float)total/counter;
		printf("Class Average is: %f\n");
	}
	else {
		printf("Unspecified");
	}
	
	
	return 0;
}
