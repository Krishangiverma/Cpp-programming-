#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void setroll(int);
    void getroll();
};
void student::setroll(int r)
{
    roll = r;
}
void student::getroll()
{
    cout << "roll number is " << roll << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks();
};
void exam::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam::getmarks()
{
    cout << "marks in maths and physics are" << maths << endl
         << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void displayresult()
    {
        getroll();
        getmarks();
        cout << "your result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result harry;
    harry.setroll(89);
    harry.setmarks(87, 76);
    harry.displayresult();
    return 0;
}