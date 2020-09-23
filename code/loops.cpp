#include <iostream>
using namespace std;

int main(){

	int nTimes = 10;
	int n = 0;

	// while loop
	while(n < nTimes){
		cout << n << endl;
		n++;
	}
	cout << n << endl;

	n = 0;

	// do-while loop
	do {
		cout << n << endl;
		n++;
	} while(n < nTimes);
	cout << n << endl;

	n = 0;

	// for loop
	for (; n < nTimes; n++){
		cout << n << endl;
	}
	cout << n << endl;

}

