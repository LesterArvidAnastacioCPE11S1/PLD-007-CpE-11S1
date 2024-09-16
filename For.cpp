#include <iostream>
using namespace std;

int main(){
	int A;
	int B=10;
	int C=-10;
	
	for (A=0;A<=B;A++)
	{
		cout << "Hello " << A << endl;
	}
	for (A=0;A>=C;A--)
	{
		cout << "Hello " << A << endl;
	}
	return 0;
}
