#include <iostream>
using namespace std;

bool LinearSearch(int A[], int, int);
int main()
{
	int A[5], Num;
	cout << "Enter 5 integer numbers : ";
	for (int i = 0; i < 5; i++)
		cin << A[i];
	cout << "Now enter the number you would like to search for : ";
	cin >> Num;
	if (LinearSearch(A, 5, Num))
		cout << "Given number was found.";
	else
		cout << "Given number was not found.";
}

bool LinearSearch(int A[], int n, int Num)
{
	for (int i = 0; i < n; i++)
		if (Num == A[i])
			return true;
		else return false;
}