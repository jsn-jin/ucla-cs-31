#include <iostream>
using namespace std;

int main(){
	int x = 5, y = 6, z = 7;
	bool a = true;
	bool b = false;
	cout << ((x != y) || (x > y)) && (y == z);		// True
	cout << (((x != y) || (x > y)) && (y == z));	// False
	cout << a && b;	// True
	cout << b && a;	// False
	cout << (a && b); // False
	cout << (x < y && y < z); // True
}
