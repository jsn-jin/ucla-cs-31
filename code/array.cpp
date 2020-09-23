#include <iostream>
using namespace std;


int findFirstNegative(double a[], int n)
{
	for (int k = 0; k < n; k++)
	{
		if (a[k] < 0)
			return k;
	}
	return -1;
}


int main()
{
	double da[5];
		
	for (int i=0; i<5; i++){
		da[i] = 1;
	}

	da[3] = -2;

	int fnpos = findFirstNegative(da, 5);
	if (fnpos == -1)
			cout << "There are no negative values in the array" << endl;
	else
	{
		cout << "The first negative value is " << da[fnpos] << endl;
		cout << "It's ar element number " << fnpos << endl;		}
}	
