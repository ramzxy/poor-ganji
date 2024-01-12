#include <iostream>
using namespace std;

int main()
{
	int counter = 0;
	for (int i = 100; i < 1000; i++)
	{	

		int  reverse = 0, temp = i;
		while (temp != 0)
		{
			reverse = reverse * 10 + temp % 10;
			temp = temp / 10;
		} 
		
		if (reverse == i)
		{
			cout << i << endl;
			counter ++;
		}

	}
	cout << counter;
}