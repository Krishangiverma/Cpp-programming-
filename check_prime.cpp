#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    if (n < 2)
    {
        cout << "not a prime number " << endl;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "not a prime";
                return 0;
            }
        }
        cout << "prime number";
    }
    return 0;
}