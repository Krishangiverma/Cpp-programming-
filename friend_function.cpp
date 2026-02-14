#include <iostream>
using namespace std;
class complexx
{
    int a, b;
    friend complexx sumcomplex(complexx o1, complexx o2);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << "+i" << b << endl;
    }
};
complexx sumcomplex(complexx o1, complexx o2)
{
    complexx o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complexx c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();
    c2.setnumber(5, 8);
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}