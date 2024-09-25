#include <iostream>
using namespace std;

int main(){
	char choices;
	
	cout << "Enter the character: " << endl;
	cin >> choices;
	
	switch(choices){
		case 'A':
			cout << "vowel";
			break;
		case 'E':
			cout << "vowel";
			break;
		case 'I':
			cout << "vowel";
			break;
		case 'O':
			cout << "vowel";
			break;
		case 'U':
			cout << "vowel";
			break;
		default:{
			cout << "consonant";
			break;
		}
	}
	return 0;
}

