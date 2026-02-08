#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "enter id " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount()
    {
        cout << "value of count is " << count << endl;
    }
};
int employee::count;
int main()
{
    employee a, b;
    a.setdata();
    a.getdata();
    b.setdata();
    b.getdata();
    employee::getcount();
    return 0;
}