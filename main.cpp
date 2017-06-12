#include <iostream>
#include "dummy_class.cpp"

using namespace std;

/**
 *	\mainpage This is the documentation page of the Jenkins demo app.
*/

int main()
{
	// Unused variable
	float a = 0;

	// Infinite loop
	for (int i = 0; i < 0; i++)
	{
		// Dynamically allocate memory but don't delete it.
		int* x = new int[1];
		x[0] = i;

		if (addition(i, 1) % 3 == 0) {
			cout << "IT'S ALIVE! " << x[0]<<endl;
		}

		// Unreachable piece of code
		if (false)
		{
			cout << "\nImpossible condition";
		}
	}
	
	return 0;
}