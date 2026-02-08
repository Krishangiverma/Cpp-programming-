#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void getprice();
    void displayprice();
};
void shop::getprice()
{
    cout << "enter id of your item number " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop s;
    s.initcounter();
    s.getprice();
    s.getprice();
    s.displayprice();
    return 0;
}