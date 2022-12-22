// Multilevel inheritance
// A -> B -> C
// C can access members of A

#include <iostream>
using namespace std;

// Base class (parent)
class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class" << endl;
    }
};

// Derived class (child)
class MyChild : public MyClass
{
public:
    void printHi()
    {
        cout << "Hi!" << endl;
    }
};

// Derived class (grandchild)
class MyGrandChild : public MyChild
{
public:
    MyGrandChild()
    {
        myFunction();
        printHi();
    }
};

int main()
{
    // Using constructor
    MyGrandChild myObj;
    cout<<"-------------------"<<endl;
    // Via object
    myObj.myFunction();
    myObj.printHi();
    return 0;
}