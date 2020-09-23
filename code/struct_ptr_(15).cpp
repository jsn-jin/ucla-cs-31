#include <iostream>
#include <string>
using namespace std;

struct Employee		
{
	string name;
	double salary;
	int age;
};

void printPayCheck(const Employee& e);
void celebrateBirthday(Employee* ep);
double totalPayroll(const Employee emps[], int n);	

int main()
{
	Employee company[100];
	int nEmployees = 0;

	company[0].name = "Jeff";
	company[0].salary = 600;
	company[0].age = 40;
	nEmployees++;

	company[1].name = "Nick";
	company[1].salary = 8000;
	company[1].age = 33;
	nEmployees++;

	company[2].name = "Chris";
	company[2].salary = 100;
	company[2].age = 13;
	nEmployees++;

	printPayCheck(company[0]);
	celebrateBirthday(&company[2]);	

	cout << totalPayroll(company, nEmployees);

	for (Employee * ep = company; ep < company + nEmployees; ep++)
		cout << ep->name << endl;
}


double totalPayroll(const Employee emps[], int n)	{
	double total = 0;
	for (int k = 0; k < n; k++)
		total += emps[k].salary;
	return total;
}

void printPayCheck(const Employee& e)
{
	cout << "Pay to the order of " << e.name << " the amount $" << e.salary/12 << endl;
}

void celebrateBirthday(Employee* ep)
{
	ep->age++;
}
