#include <iostream>
using namespace std;

int fibo(int);
int main()
{
	cout << "Please enter a positive integer number : ";
	int n;
	cin >> n;
	cout << n << "th number in the fibo sequence is: " << fibo(n);
};

int fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	int result;
	result = fibo(n - 1) + fibo(n - 2);
}