#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
using std :: setw;

int main (){
	char choices;
	char cont = 'Y';
	
	while (cont == 'Y'){
	
	cout << "... Oh hello. "<< endl;
	system("pause");
	cout << "How have you been? its been quite long" << endl;
	system("pause");
	cout << "... It seems that you dont remember me.."<< endl;
	system("pause");
	cout << "Oh well.. My name is.. REDACTED"<< endl;
	cout << "please tell me your name.."<<endl;
	cout << "Insert Name"<< endl;
	
	string name;
	getline (cin,name);
	cout << "Nice to meet you "<< name <<endl;
	
	cout << "Want to go back? Y/N"<<endl;
	cin >> cont;
	}
    cout << "it's kinda sad that you don't remember me..."<< endl;
    cout << "but it is to be expected.. you did great.."<<endl;
    system("pause");
    
	cout << "say.. want to play a game? Y/N"<<endl;
	cin >> choices;
    
    
    switch(choices){
    	case 'Y':
    	case 'y':
    		cout << "oh great!.. let's play rock,paper,scissors?"<<endl;
    		cout << "Ill count to 3"<<endl;
    		system("pause");
    		cout << "1"<<endl;
    		system("real");
    		cout << "2"<<endl;
    		system("real");
    		cout << "3!!!"<<endl;
    		cout << "Rock, Paper, Scissors? ";
    		char game;
    		cin >> game;
    		
    		
    		break;
    		
    	case 'N':
    	case 'n':
    		cout << "oh alright.. understandable"<<endl;
    		break;
    	default:
    		cout << "you ok?"<<endl;
    		break;
	}
	

return 0;
}
