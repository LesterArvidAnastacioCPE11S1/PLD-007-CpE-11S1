#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	time_t now=time(0); //Get current time system
	cout<<"Current time: "<<ctime(&now)<<endl;
	
	return 0;
}
