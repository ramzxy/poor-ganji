#include <iostream>
using namespace std;
void hanoi(char start, char end, char temp, int n);
int main()
{
	cout << "How many Disks : ";
	int n;
	cin >> n;
	hanoi('A', 'C', 'B', n);
};

void hanoi(char start, char end, char temp, int n)
{
	if (n == 0)
		return;
	hanoi(start, temp, end, n - 1);

	cout << "move disk " << n << " from " << start << " to " << end << endl;

	hanoi(temp, end, start, n - 1);
}