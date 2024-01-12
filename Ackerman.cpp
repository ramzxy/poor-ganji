#include <iostream>
using namespace std;

int ack(int a, int b);
int main()
{
	cout << "Enter ack func : ";
	int a, b; 
	cin >> a >> b;
	cout << "ack of given number is : " << ack(a, b);
}

int ack(int a, int b)
{
	if (a == 0)
		return b + 1;
	else if (a > 0 && b == 0)
		return ack(a - 1, b = 1);
	else if (a > 0 && b > 0)
		return ack(a - 1, ack(a, b - 1));
}