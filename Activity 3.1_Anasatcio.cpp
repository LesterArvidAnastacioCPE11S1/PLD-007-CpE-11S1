#include <iostream>
using namespace std;

int main (){
	
	int accountnumber;
	float balance;
	float charges;
	int credits;
	int limit;
	float total;
	int i;
	
	while (i != -1){
	
	cout << ("Enter Account Number (press -1 to end): ") << endl;
	cin >> accountnumber;
		
	if (accountnumber == -1){
		cout << "Thank you and Have a Nice day User..";
		break;
	}
	if (accountnumber >= -1){
		cout << ("Enter Beginning Balance: ")<< endl;
		cin >>  balance;
		
		cout <<("Enter Total Charges:  ")<< endl;
		cin >> charges;
		
		cout << ("Enter Total Credits: ") << endl;
		cin >> credits;
		
		cout << ("Enter Credit Limit: ") << endl;
		cin >> limit;
		
		total = balance - charges + credits;
		
		cout << ("Account: ")<< accountnumber << endl;
		cout << ("Cred Limit: ")<< limit << endl;
		cout << ("Balance: ")<< total << endl;
	}
	if (limit <= total){
		
		cout << ("Credit Limit Exceeded") << endl;
		
	}
}
		
	return 0;
}
