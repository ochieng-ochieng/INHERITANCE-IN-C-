#include<iostream>
using namespace std;

class Base{
public:
    int i;
};

//Derived1 inherits base.
class Derived1 : public Base{
public:
    int j;
};

//Derived2 inherits base.
class Derived2 : public Base{
public:
    int k;
};

//Derived3 inherits both Derived1 and Derived2.
//This means that there are two copies of Base in
//Derive3
class Derived3 : public Derived1, public Derived2{
public:
    int sum;
};

int main()
{
    Derived3 ob;

    ob.Derived1::i = 10; //scope resolved use Derived1's i
    ob.j = 20;
    ob.k = 30;

    ob.sum = ob.Derived1::i + ob.j + ob.k;

    cout << ob.Derived1::i << " ";
    cout << ob.j << " " << ob.k << " ";
    cout << ob.sum;

    return 0;
}
