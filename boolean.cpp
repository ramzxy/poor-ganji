#include <iostream>
using namespace std;

bool booleanSearch(int A[], int, int);
int main()
{
	int A[5], Num;
	cout << "Enter 5 integer numbers : ";
	for (int i = 0; i < 5; i++)
		cin >> A[i];
	cout << "Now enter the number you would like to search for : ";
	cin >> Num;
	if (booleanSearch(A, 5, Num))
		cout << "Given number was found.";
	else
		cout << "Given number was not found.";
}

bool booleanSearch(int A[], int n, int Num)
{
	int beg = 0, end = n - 1;
	while (beg <= end)
	{
		int mid = (beg + end) / 2;
		if (A[mid] == Num)
			return true;
		else if (Num > A[mid])
			beg = mid + 1;
		else if (Num < A[mid])
			end = mid - 1;
	}
	 return false;
}