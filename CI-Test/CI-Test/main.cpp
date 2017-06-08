#include<iostream>

using namespace std;

int main()
{
	// Infinite loop
	while (true)
	{
		// Dynamically allocate memory but don't delete it.
		int* x = new int[1];
		x[0] = 5;
		cout << "IT'S ALIVE! " << x[0] << endl;

		// Unreachable piece of code
		if (false)
		{
			cout << "\nImpossible condition";
		}
	}

	return 0;
}