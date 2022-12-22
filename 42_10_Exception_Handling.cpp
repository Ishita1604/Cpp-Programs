#include <iostream>
#include <conio.h>
using namespace std;

class Base
{
};

class Derived : public Base
{
};

int main()
{
    system("cls");
    Derived D;
    try
    {
        throw D;
    }
    catch (Base B)
    {
        cout << "Exception caught of base class" << endl;
    }
    catch (Derived D)
    {
        cout << "Exception caught of derived class" << endl;
    }

    return 0;
}
// Exception is caught in base class as written 1st
// If exception to be caught in derived class, then write it 1st
// Exception of derived type can be caught in base class as well bcos derived type is made of base type as well
// Virtual pointer concept