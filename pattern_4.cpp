#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char name = 'a' + i - 1;
        for (int j = 1; j <= 5; j++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    cout << endl;

    // another way to print the same pattern is
    for (char i = 'a'; i <= 'e'; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}