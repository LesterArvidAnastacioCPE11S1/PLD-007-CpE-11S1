#include <iostream>
using namespace std;


int main(){
    int value = 0, sum , num; 
    
    cout << "Insert Number: "<<endl;
    cin >> sum;
    cout << "Insert End: "<<endl;
    cin >> num;   
     cout << "Counting..." <<endl;
    for (value;value <=num;value++)
	{
        if(value % sum == 0 )
        {
            if(value != 0){
               cout << value << endl;
            }
        }
	}
    return 0;
}