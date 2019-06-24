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

class Derived : public Base{
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

int main()
{
   Derived ob;

   ob.set_v(2, 3) ;//ok known to derived
   ob.show();//ok, known to Derive

   ob.set_k();
   ob.showk();

   return 0;
}
