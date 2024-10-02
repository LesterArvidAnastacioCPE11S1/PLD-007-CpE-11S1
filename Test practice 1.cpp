#include <stdio.h>

int main(){
	int value[]= {10,20,30,40,50};
	int i = 0;
	do{
		printf ("Your Sum is: %d \n", value[0]+value[4]);
		i++;
	}
	while (i < 1);
	
	return 0;
}
