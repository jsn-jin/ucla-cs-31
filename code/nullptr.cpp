#include <iostream>
using namespace std;

int g_n = 42; 

	void func_ptr(int* pp)			// Copy, not reference
	{ 								// If reference, either int* &pp,
  		pp = &g_n; 					// or *pp = g_n
	} 

	int main() 
	{ 
  		int n = 23; 
  		int* pn = &n; 
  		cout << "Before :" << *pn << endl; 
  		func_ptr(pn); 
  		cout << "After :" << *pn << endl; 
	} 

