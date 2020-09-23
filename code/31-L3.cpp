#include <iostream>
using namespace std;

int main(){
	cout << "What is your name? ";
	string personsName;	
		// we need the whole line of input, including blank space.

	getline(cin, personsName);	
		// this lets the user to type in a string, 		//	and it helps store the whole line he typed into str.

	cout << "How old are you? ";
	int age;
	cin >> age;
	cin.ignore(10000, '\n');	

	cout << "What is your quest? ";
	string quest;
	getline(cin, quest);

	cout << "Hello, brave " << personsName << "!" << endl;
	cout << "You want " << quest << "." << endl;
	cout << "If you live, next year you will be " << (age+1) << endl;
}

