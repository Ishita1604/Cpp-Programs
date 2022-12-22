// ------------------------------------------------ Run-time Polymorphism
// Late binding
// Compiler doesn't know which function to execute
// Slow

// ------------------------------------------------ Virtual Functions
// Type of Run-time Polymorphism
// Member functions declared in the base class with "virtual" keyword are called Virtual Functins
// They can be redefined in derived class
// NOT static

#include <iostream>
using namespace std;

class Base
{
public:
    int var_base = 100;
    void displayFunc()
    {
        cout << "Value of Variable of Base class is: " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived = 12;
    void displayFunc()
    {
        cout << "Value of Variable of Base class is: " << var_base << endl;
        cout << "Value of Variable of Derived class is: " << var_derived << endl;
    }
};

int main()
{
    system("cls");
    Base *base_ptr;
    Derived *derived_ptr;
    Base b;
    Derived d;
    base_ptr = &b;
    derived_ptr = &d;

    cout << "Value of Base Variable:                                " << b.var_base << endl;
    cout << "Value of Derived Variable:                             " << d.var_derived << endl;

    cout << "Value of Base Pointer (Address of Base Object):        " << base_ptr << endl;
    cout << "Address of Base Variable:                              " << &b.var_base << endl;

    cout << "Value of Derived Pointer (Address of Derived Object):  " << derived_ptr << endl;
    cout << "Address of Derived Variable:                           " << &d << endl;

    return 0;
}