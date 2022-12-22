// Templates with multiple parameters
// Same class can take multiple data types

#include <iostream>
using namespace std;

template <class T1, class T2, class T3, class T4>
class Ishita
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    T4 data4;
    Ishita(T1 x, T2 y, T3 z, T4 w)
    {
        data1 = x;
        data2 = y;
        data3 = z;
        data4 = w;
    }
    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2 << endl;
        cout << this->data3 << endl;
        cout << this->data4 << endl;
    }
};

int main()
{
    Ishita<int, char, float, string> obj(10, 'A', 2.33, "Fun");
    obj.display();
}