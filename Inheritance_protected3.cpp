#include<iostream>
using namespace  std;

class Base{
protected:
    int i, j;//private to Base but accessible by Derived
public:
    void set_ij(int a, int b)
    {
        i = a;
        j = b;
    }
    void show_ij()
    {
        cout << i << " " << j << "\n";
    }

};

//inherit base as protected
class Derived : protected Base{
    int k;
public:
    //Derived may access Base's i and j and set_ij()
    void set_k()
    {
        set_ij(10, 12);
        k = i * j;
    }
    //may access show_ij() here
    void showall()
    {
        cout << k << " " ;
        show_ij();
    }

};

int main()
{
    Derived ob;

    //ob.set_ij(2, 3); //illegal, set_ij() is protected member of Derived

    ob.set_k();// ok, public member of Derived
    ob.showall();//ok public member of Derived

    //ob.show_ij();//illegal show_ij() is protected member of Derived


    return 0;
}
