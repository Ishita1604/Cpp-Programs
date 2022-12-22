#include <iostream>
using namespace std;

template <class T>
class Ishita
{
public:
    T data1;
    T data2;
    Ishita(T x, T y)
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
    Ishita<int> obj(10, 20);
    obj.display();
}

/*
Two classes that do the same thing but can't be defined as one bcos they use different data types
Used to design GENERIC CODE / GENERIC PROGRAMMING

DRY (Don't Repeat Yourself)- Don't have to write same code again for different data type

The template class represents many classes of different datatypes

Templates are called PARAMETERISED CLASSES
Syntax:

template <class T>
class ClassName
{
public:
    T data1;
    T data2;
    obj.classMethod(T x)
    {
        data1 = x;
        data2 = y;
    }
};
int main()
{
    ClassName<int / float / char> obj;
    obj.classMethod();
}

*/