#include<iostream>
using namespace std;

class Base{
protected:
    int i;
public:
    Base(int x)
    {
        i = x;
        cout << "Constructing base\n";
    }
    ~Base()
    {
        cout << "Destructing base\n";
    }
};

class  Derived : public Base{
int j;
public:
    //derived uses x, y is passed to base.
    Derived(int x, int y):Base(y)
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
        cout << i << "  " << j << "\n";
    }
} ;

int main()
{
    Derived ob(3, 4);

    ob.show(); //displays 4  3
    return 0;
}
