#include <iostream>
#include <cwchar>
#include <windows.h>
#include <iomanip>
using namespace std;
using std:: setw;

int main(){
	char op;
	float sum;
	float value1;
	float value2;
	char cont = 'Y';
	char stop = 'N';
	
	while (cont == 'Y'){
	cout << setw(65)<<"BASIC CALCULATOR"<< endl;
	cout << "Choose Operator: " << endl;
	cout << "[A] Add, [B] Sub, [C] Multi, [D] Div"<< endl;
	cin >> op;
	
	switch(op){
		case 'A':
		case 'a':
			cout << "Please Enter First Number: "<< endl;
			cin >> value1;
			cout << "Please Enter Second Number"<< endl;
			cin >> value2;
			sum = value1 + value2;
			cout << "The answer is.. :" << sum << endl;
			break;
		case 'B':
		case 'b':
			cout << "Please Enter First Number: "<< endl;
			cin >> value1;
			cout << "Please Enter Second Number"<< endl;
			cin >> value2;
			sum = value1 - value2;
			cout << "The answer is.. :" << sum << endl;
			break;
		case 'C':
		case 'c':
			cout << "Please Enter First Number: "<< endl;
			cin >> value1;
			cout << "Please Enter Second Number"<< endl;
			cin >> value2;
			sum = value1 * value2;
			cout << "The answer is.. :" << sum << endl;
			break;
		case 'D':
		case 'd':
			cout << "Please Enter First Number: "<< endl;
			cin >> value1;
			cout << "Please Enter Second Number"<< endl;
			cin >> value2;
			sum = value1 / value2;
			cout << "The answer is.. :" << sum << endl;
			break;
		default:{
			cout << "Unidentified";
			break;
		}

	}
	cout << "Try Again? Y/N: "<< endl;
	cin >> cont;
	if ('N'){
		cout << "Thank you for using the calculator";
	}
}
	return 0;
}
