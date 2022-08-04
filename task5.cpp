#include <iostream>
#include <cmath>
using namespace std;


void main()

{
	for (int date = 1; date <= 31; date++)
	{
		cout << date << "\t";
		if (date % 7 == 0)
			cout << "\n\n";
	}
	cout << "\n\n";
}

