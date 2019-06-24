#include<iostream>
using namespace std;

class Base1{
protected:
    int i;
public:
    Base1(int x)
    {
        i = x;
        cout << "Constructing Base1\n";
    }
    ~Base1()
    {
        cout << "Destructing Base1\n";
    }
};

class Base2{
protected:
    int k;
public:
    Base2(int x)
    {
        k = x;
        cout << "Constructing Base2\n";
    }
    ~Base2()
    {
        cout << "Destructing Base2\n";
    }
};

class  Derived : public Base1, public Base2{
int j;
public:
    //derived uses x, y is passed to base.
    Derived(int x, int y, int z):Base1(y), Base2(z)
    {
      j = x;
      cout << "Constructing Derived\n";
    }
    ~Derived()
    {
      cout << "Destructing Derived\n";
    }
    void show()
    {
        cout << i << "  " << j << "  " << k << "\n";
    }
} ;

int main()
{
    Derived ob(3, 4, 5);

    ob.show(); //displays 4  3
    return 0;
}

