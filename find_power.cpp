#include <iostream>
using namespace std;
int main()
{
    int num, n, pow;
    cout << "enter the number: " << endl;
    cin >> n;
    cout << "enter the power: " << endl;
    cin >> pow;
    num = n;
    for (int i = 0; i < pow; i++)
    {
        num = num * n;
    }
    cout << num;
    return 0;
}