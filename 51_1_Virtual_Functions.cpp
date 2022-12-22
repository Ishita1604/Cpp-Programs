// Pointer to Derived class
#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void displayFunc()
    {
        cout << "Value of Variable of Base class is: " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void displayFunc()
    {
        cout << "Value of Variable of Base class is: " << var_base << endl;
        cout << "Value of Variable of Derived class is: " << var_derived << endl;
    }
};

int main()
{
    system("cls");

    Base b;
    Derived d;

    Base *base_ptr;
    base_ptr = &d;
    Derived *derived_ptr;
    derived_ptr = &d;

    base_ptr->var_base = 34;
    base_ptr->displayFunc(); // Base ka call hua

    // base_ptr->var_derived = 128;
    // Throws error as base ke pointer se we can access only base ke members
    // base_ptr->displayFunc();

    derived_ptr->var_base = 35;
    derived_ptr->var_derived = 128;
    derived_ptr->displayFunc(); // Derived ka call hua

    return 0;
}