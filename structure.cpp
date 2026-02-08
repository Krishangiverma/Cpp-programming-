#include <iostream>
using namespace std;
struct employee
{
    int id;
    char favchar;
    float salary;
};
int main()
{
    struct employee harry, shubh;

    harry.id = 1;
    harry.favchar = 'c';
    harry.salary = 12009.6;

    shubh.id = 2;
    shubh.favchar = 'k';
    shubh.salary = 5678.9;

    cout << "id of harry  is " << harry.id << endl;
    cout << "salary  is " << harry.salary << endl;
    cout << "id of shubh is " << shubh.id << endl;
    cout << "salary is " << shubh.salary << endl;
    return 0;
}