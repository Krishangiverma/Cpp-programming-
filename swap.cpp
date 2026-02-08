// call by reference using pointers
#include <iostream>
using namespace std;
void swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 4, y = 5;
    cout << "value of x is " << x << " and value of y is  " << y << endl;
    swap_pointer(&x, &y);
    cout << "after swapping x is " << x << " and y is " << y << endl;
    return 0;
}