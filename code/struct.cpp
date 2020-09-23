#include <iostream>
using namespace std;

struct Employee	// Probably we have a bunch of employee
{
	string name;
	double salary;
	int age;
	// string address;
	// … some more information
}; 	// <———————————————————————————— Don’t forget this semi-colon.

int main()
{
	Employee e1;		// In c++, it is called a data members.
	Employee e2;		// Another employee.

	e1.name = "Fred";
	e1.salary = 60000;
	e1.age = 50;

	e2.name = "Ethel";
	e1.age++;
	
	cout << "Enter a name: ";
	getline(cin, e2.name);

	Employee company[100];
	company[3].name = "Ricky";

	for (int k = 0; k != company[3].name.size(); k++)
		cout << company[3].name[k] << endl;			// this will print the name vertically.

	cout << e1.name << endl;
	cout << e2.name << endl;
}
