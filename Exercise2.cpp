#include <iostream>
using namespace std;

int main(){
	int num1;
	int num2;
	
	int sum,diff,prod,rem;
	float quotient;
	
	    cout << "Please Type Two Integers:"<<endl;
    	cout << "First Input:";
		cin >> num1;
		cout << "Second Input:";
		cin >> num2;
	
		sum = num1 + num2;
		diff = num1 - num2;
		prod = num1 * num2;
		quotient =(float)num1 /(double)num2;
		rem = num1 % num2;
	
		cout << "Sum:" << sum << endl;
		cout << "Difference: " << diff << endl;
		cout << "Product: " << prod << endl;
		cout << "Quotient:" << quotient << endl;
		cout << "Reminder:" << rem << endl;
	
	return 0;
 }
	
	
