#include<iostream>

using namespace std;


/**
* @brief Dummy function to test doxygen
* @param x The most useless parameter ever
* @return 3
*/

int gereksizFonksiyon(int x) 
{
	return 3;
}

int main()
{
	// Infinite loop
	float a = 1.23;
	int b = a;
	while (true) 
	{
		// Dynamically allocate memory but don't delete it.
		int* x = new int[1];
		x[0] = 5;
		cout << "IT'S ALIVE! " << x[0]<<endl;

		// Unreachable piece of code
		if (false)
		{
			cout << "\nImpossible condition";
		}
	}
	
	return 0;
}