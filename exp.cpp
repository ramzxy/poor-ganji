#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Enter the Nth exp you would like to know : ";
	double final = 0, exp = 1, pow, fac = 1;
	cin >> pow;
	for (int i = 1; i < pow; i++)
	{
		final += exp / fac;
		fac *= i;
		exp *= pow;
	};

	cout << setprecision(50) <<"exp to the power of " << pow << " is " << final;
	return 0;
}