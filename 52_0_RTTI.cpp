#include <iostream>
#include <typeinfo>
using namespace std;

class Class1
{
};
class Class2
{
};

int main()
{
    system("cls");
    double x = 0;
    int i = 10, j = 11;
    int *ptr_i = &i;
    char *ptr_char;
    Class1 obj1;
    Class2 obj2;

    cout << typeid(x).name() << endl;
    cout << typeid(i).name() << endl;
    cout << typeid(ptr_i).name() << endl;
    cout << typeid(obj1).name() << endl;
    cout << typeid(obj2).name() << endl;
    cout << typeid(ptr_char).name() << endl;



    if (typeid(i) == typeid(j))
        cout << "Both have same typeid" << endl;

    else if (typeid(i) != typeid(j))
        cout << "Both have different typeid" << endl;

    return 0;
}