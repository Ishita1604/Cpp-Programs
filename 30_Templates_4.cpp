// Templates with default parameters

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = char> // Default parameters
class Ishita
{
public:
    T1 data1;
    T2 data2;
    Ishita(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }
    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2 << endl;
    }
};

int main()
{
    Ishita<> obj(10, 'A'); // Datatypes left empty so default ones work
    obj.display();
    Ishita<float, string> obj2(10.16, "My string"); // Datatypes specified
    obj2.display();
    Ishita<string> obj3("Fun", 'B'); // One specified other default
    obj3.display();

    return 0;
}