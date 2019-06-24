#include<iostream>
using namespace std;

class Base{
    protected:
        int i, j;//private to base, but accessed by derived
    public:
        void set_v(int a, int b)
        {
            i = a;
            j = b;
        }
        void show()
        {
            cout << i << " " << j << "\n";
        }

};

class Derived1 : public Base{
    int k;
public:
    //Derive may  access Base's i and j
    void set_k()
    {
        k = i * j;
    }
    void showk()
    {
        cout << k << "\n";
    }

};

//i and j inherited indirectly through  Derived1.
class Derived2 : public Derived1{
    int m;
public:
    void set_m()
    {
        m = i - j;//legal
    }
    void showm()
    {
        cout << m << "\n";
    }
};

int main()
{
   Derived1 ob1;
   Derived2 ob2;

   ob1.set_v(2, 3) ;//ok known to derived
   ob1.show();//ok, known to Derive

   ob1.set_k();
   ob1.showk();

   ob2.set_v(3, 4);
   ob2.show();
   ob2.set_k();
   ob2.set_m();
   ob2.showk();
   ob2.showm();

   return 0;
}

