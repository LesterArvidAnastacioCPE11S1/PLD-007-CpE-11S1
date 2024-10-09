#include <iostream>
using namespace std;

int main (){
	float gallons;
	int miles;
	float total;
	int i;
	
	while (i != -1){

	cout << "Enter Gallons Used: (type -1 to end) "<< endl;
	cin >> gallons;
	
	if (gallons == -1){
		cout << "Thank you, User";
		break;
	}
	
	cout << "Enter miles Driven: (type -1 to end)"<< endl;
	cin >> miles;
	
	if (miles == -1){
		cout << "thank you, User";
		break;
	}
	total = miles / gallons;
	
	cout << "The miles / gallon for this tank was: \n" << total<< endl;
}

	return 0;
	
}
