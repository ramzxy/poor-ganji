#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a positive integer number : ";
	int Num, reverse = 0;
	cin >> Num;
	int x = Num;
	do
	{
		reverse = reverse * 10 + x % 10;
		x = x / 10;

	} while (x != 0);

	if (reverse == Num)
		cout << "This number equals its reverse.";
	else
		cout << "This number does not equals its reverse.";
	return 0;
}