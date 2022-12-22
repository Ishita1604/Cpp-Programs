#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData(void)
    {
        // cout << "\na = " << a << " b = " << b << endl;
        if (b >= 0)
            cout << "\n"
                 << a << "+" << b << "i" << endl;
        else
            cout << "\n"
                 << a << b << "i" << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }
};

int main()
{
    system("cls");
    Complex c1, c2, c3, c4;
    c1.setData(1, 2);
    c1.showData();
    c2.setData(4, -5);
    c2.showData();
    // c3 = c1 + c2;    -> Doesn't work bcos '+' operator doesn't know addition of Complex type
    c3 = c1 + c2; // OR c3 = c1.operator+(c2);
    c4 = c1 - c2; // OR c4 = c1.operator-(c2);
    cout << "Addition";
    c3.showData();
    cout << "Subtraction";
    c4.showData();
    return 0;
}

/*
Operator overloading - When an operator is overloaded with multiple jobs
Compile time polymorphism
Any valid symbol of C++ can be overloaded
'sizeof' and '?:' can't be overloaded
*/