#include <iostream>
#include <cstdlib>  
#include <ctime>   
#include <string>

using namespace std;

int main() {
	const int ASCII_SIZE = 88;  
	const char* ASCII[] = {"1","2","3","4","5","6","7","8","9","0","q","Q","w","W","E","e","r","R","t","T","y","Y","U","u","I","i","o","O","P","p","A","a","S","s","d","D","F","f","G","g","h","H","j","J","k","K","L","l","Z","z","X","x","C","c","V","v","B","b","N","n","M","m","!","@","#","$","%","^","&","*","(",")","_","!","@","#","$","%","!","@","#","$","%","!","@","#","$","%"};
	
	int len;
	cout << "密码长度:";
	cin >> len;
	
	string mima[len];
	srand(time(0)); 
	
	for (int i = 0; i < len; i++) {
		mima[i] = ASCII[rand() % ASCII_SIZE];
	}
	
	cout << "密码:";
	for (int i = 0; i < len; i++) {
		cout << mima[i];
	}
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	string Q; 
	cout<<"请键入任意键退出程序"<<endl;
	cin>>Q; 
	return 0;
}
