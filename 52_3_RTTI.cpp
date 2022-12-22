#include <iostream>
#include <typeinfo>
using namespace std;

template <class T>
class MyClass
{
    T a;

public:
    MyClass(T i)
    {
        a = i;
    }
};

int main()
{
    system("cls");
    MyClass<int> obj1(12);
    MyClass<int> obj2(13);
    MyClass<double> obj3(14.8964);

    cout << typeid(obj1).name() << endl;
    cout << typeid(obj2).name() << endl;
    cout << typeid(obj3).name() << endl;

    if (typeid(obj1) == typeid(obj2))
        cout << "Here obj1 and obj2 have same typeid" << endl;

    if (typeid(obj1) == typeid(obj3))
        cout << "########## ERROR ##########" << endl;
    else
        cout << "Here obj1 and obj3 have different typeid" << endl;

    return 0;
}