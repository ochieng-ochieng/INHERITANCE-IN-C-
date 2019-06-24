#include<iostream>
using namespace std;

class Base{
public:
    int i;
};

// derived1 inherits base as virtual.
class Derived1 : virtual public Base{
public:
    int j;
};

// derived2 inherits base as virtual.
class Derived2 : virtual public Base{
public:
    int k;
};

/* derived3 inherits both derived1 and derived2.
This time, there is only one copy of base class. */
class Derived3 : public Derived1, public Derived2{
public:
    int sum;
};

int main()
{
    Derived3 ob;

    ob.i = 10; //scope resolved use Derived1's i
    ob.j = 20;
    ob.k = 30;

    ob.sum = ob.i + ob.j + ob.k;

    cout << ob.i << " ";
    cout << ob.j << " " << ob.k << " ";
    cout << ob.sum;

    return 0;
}

