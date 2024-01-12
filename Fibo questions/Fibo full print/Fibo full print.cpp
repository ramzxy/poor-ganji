#include<iostream>
using namespace std;

int main() {
    int n;

   
    cout << "Enter the number up to which you want the Fibonacci sequence: ";
    cin >> n;
    int first = 0, second = 1, next;
    cout << "Fibonacci Sequence up to " << n << ":" << std::endl;

    while (first <= n) {
        cout << first << " , ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
