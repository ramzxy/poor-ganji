#include <iostream>
#include <windows.h>
using namespace std;

void sort(string [], int);
bool search(string [], int, string);
int main()
{
    const int n=5;
    string str[n], find;
    for (int i=0 ; i < n ; i++)
    {
        cout << "Enter student's full name : ";
        getline(cin, str[i]);
    }
    cout << "Enter the name you would like to search for : ";
    getline(cin, find);
    sort(str, n);
    if (search(str, n, find))
        cout << "Student " << find << " was found.";
    else
        cout << "Student " << find << " was NOT found.";
}
void sort(string str[], int n)
{
    for(int i=n-1; i > 0 ; i--)
        for(int j=0; j < i ; j++)
        {
            string temp;
            if (str[j].compare(str[j+1]) > 0)
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
}
bool search(string str[], int n, string find)
{
    int min=0, max=n-1;
    while(min <= max)
    {
        int mid=(min+max)/2;
        if(str[mid].compare(find) == 0)
            return true;
        else if(str[mid].compare(find) > 0)
            max = mid-1;
        else
            min=mid+1;
    }
    return false;
}