#include<iostream>
using namespace std;

class Base{
    int i, j;
public:
    void set_v(int a, int b)
    {
        i = a;
        j = b;
    }
    void show()
    {
        cout << i << "  " << j << "\n";
    }
};

class Derived : public Base{
    int k;
public:
    Derived(int x)
    {
      k = x;
    }
    void showk()
    {
        cout << k << "\n";
    }
};

int main()
{
    Derived ob(3);

    ob.set_v(1, 2); //access members of base
    ob.show();// access member of base

    ob.showk(); //uses member of derived class

    return 0;
}
