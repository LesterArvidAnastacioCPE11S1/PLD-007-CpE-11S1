#include <iostream>
using namespace std;

int main(){

	string name;
	char gender;
	char cont = 'Y';
	
	
	cout << "Hello, User.. Please tell me your name: "<< endl;
	getline (cin, name);
	
	while (cont == 'Y'){
		
	cout << "Choose Gender: " << endl;
	cout << "[A] Male"<< endl;
	cout << "[B] Female"<< endl;
	cin >> gender;
	
	switch(gender){
		case 'A':
			cout << "I welcome you, Lord " << name << endl;
			break;
		case 'B':
			cout << "I welcome you, Lady " << name << endl;
			break;
		default:{
			cout << "Sorry, I didnt catch that.."<< endl;
			break;
		}
	}
	cout << "Want to change gender?: Y/N"<< endl;
	cin >> cont;
}
	return 0;
}

