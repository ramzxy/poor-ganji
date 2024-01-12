#include <iostream>
using namespace std;

bool search(int[], int, int);
int repeater(int[], int, int);
int main()
{
	cout << "enter the 20 numbers you want the seacrh to be done in : ";
	int A[20];
	for (int i = 0; i < 20; i++)
		cin >> A[i];
	cout << "Now enter the number you want to search: ";
	int Num;
	cin >> Num;
	if (search(A, 20, Num))
		cout << "Given number was found and reapeated for " << repeater(A, 20, Num) << " times";
	else
		cout << "Given number was not found.";

};

bool search(int A[], int n, int Num)
{
	int beg = 0, end = n - 1;
	while (beg <= end)
	{
		int mid = (beg + end) / 2;
		if (A[mid] = Num)
			return 1;
		else if (A[mid] <= Num)
			mid = beg + 1;
		else if (A[mid] >= Num)
			mid = end - 1;
		else return 0;
	};
}

int repeater(int A[], int n, int Num)
{
	int total = 0;
	for (int i = 0; i < 20; i++)
	{
		if (A[i] == Num)
			total += 1;
	};

	return total;
}