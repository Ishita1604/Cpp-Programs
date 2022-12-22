#include <iostream>
using namespace std;

class A
{
    // Encapsulation is process of binding data members and functions in a single unit (E.g class)
    // Encapsulation is implemented using class and access modifiers
    // The private members can't be accessed outside the class
    // They can be accessed using the public member functions
    // Member functions are called via object of class
    // Only if all data members are used by that function, only then it is called Encapsulation
    // Encapsulation leads to Abstraction and Data Hiding due to private members
private:
    int a = 10, b = 20; // Data members

public:
    void sumFunc() // Function
    {
        cout << "Sum is " << a + b << endl;
    }
};

int main()
{
    system("cls");
    A obj;
    obj.sumFunc();

    return 0;
}