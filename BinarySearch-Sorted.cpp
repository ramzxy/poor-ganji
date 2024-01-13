#include <iostream>
using namespace std;
void sort(int A[], int );
bool binarySearch(int A[], int, int);
int main()
{
	int A[5], Num;
	cout << "Enter 5 integer numbers : ";
	for (int i = 0; i < 5; i++)
		cin >> A[i];
	sort(A, 5);
	cout << "Now enter the number you would like to search for : ";
	cin >> Num;
	if (binarySearch(A, 5, Num))
		cout << "Given number was found.";
	else
		cout << "Given number was not found.";
	return 0;
}

bool binarySearch(int A[], int n, int Num)
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

void sort(int A[], int n)
{
	for (int i = 1; i < n; i++)
		for (int j = 0; j < n - i; j++)
			if (A[j] > A[j + 1])
			{
				int temp;
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}

}