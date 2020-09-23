#include <iostream>
using namespace std;

double* findFirstNegative(double *a, int n)
	{
		for (double* p=a; p<a+n; p++)
		{
			if (*p < 0)
			return p;	
					// p is getting incremented. p = &a[0], &a[1], &a[2]...
					// p = &a[2] equals &a[0] + 2. p = a, a+1, a+2...
		}
		return nullptr;		
					// Pointer to the end of the array.
					// An alternative return: null pointer.
					// c++11: nullptr
					// Earlier: NULL (don’t use this)
					// Attempting to dereference a nullptr will result in undefined behavior.
	}

	int main()
	{
		double da[5];

		for (int i=0; i<5; i++){
			da[i] = 1;
		}

		da[2] = -2;

		double* pfn = findFirstNegative(da, 5);
		if (pfn == nullptr)
 			cout << "There are no negative values in the array" << endl;
		else
		{
			cout << "The first negative value is " << *pfn << endl;
			cout << "It's an element number " << pfn - &da[0] << endl;
		}
	}	
