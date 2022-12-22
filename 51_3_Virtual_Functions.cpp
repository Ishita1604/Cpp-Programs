// Final code example
#include <iostream>
using namespace std;

class Base
{
public:
    int var_base = 34;
    // Remove "virtual" to see other result
    virtual void displayFunc()
    {
        cout << "Variable of Base class: " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived = 128;
    void displayFunc()
    {
        cout << "Variable of Base class: " << var_base << endl;
        cout << "Variable of Derived class: " << var_derived << endl;
    }
};

int main()
{
    system("cls");
    Base b;
    Derived d;

    Base *ptr_base = &d;
    // ptr_base->displayFunc(); /* Base ka function call hua without "virtual" */
    ptr_base->displayFunc(); /* Derived ka function call hua with "virtual" */

    Derived *ptr_derived = &d;
    ptr_derived->displayFunc(); /* Derived ka function call hua */

    return 0;
}