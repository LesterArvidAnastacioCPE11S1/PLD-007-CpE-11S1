#include <iostream>
using namespace std;

int main(){
	string name;
	float x;
	char cont = 'y';
	
	cout << "\nHello, Please Input your Name" << endl;
	getline (cin , name);

	cout << "\nWelcome, " << name << endl;
	while (cont == 'y'){
	cout << "\nInput your Grade:" << endl;
	cin >> x;
		if(x <= 100 && x >= 94.99 ){
			cout << "Excellent";
		}
		else if(x >= 88.5 && x <= 93.99){
			cout << "Superior";
		}
		else if(x >= 83 && x <= 88.49){
			cout << "Meritorious";
		}
		else if(x >= 77.5 && x <= 82.99){
			cout << "Very Good";
		}
		else if(x >= 72 && x <= 77.49){
			cout << "Good";
		}
		else if(x >= 65.5 && x <= 71.99){
			cout << "Very Satisfactory";
		}
		else if(x >= 61 && x <= 65.49){
			cout << "Satisfactory";
		}
		else if(x >= 55.5 && x <= 60.99){
			cout << "Fair";
		}
		else if(x >= 50 && x <= 55.49){
			cout << "Passing" << endl;
			cout << "Incomplete";
		}
		else if(x >= 0 && x <= 49.99){
			cout << "Failed" << endl;
			cout << "Officially Dropped" << endl;
			cout << "Unofficially dropped" << endl;
			cout << "No Credit"<<endl;
		}
		else if(x > 101){
			cout << "It Does Not Exist!" ;
		}
	cout<<"\nTry Again? (Y/N)"<<endl;
	cin>>cont;
	}
	return 0;
	
}
