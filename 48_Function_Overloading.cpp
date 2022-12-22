#include <iostream>
using namespace std;

class Sum
{
    // Same name, different parameters by-
    // 1. Different datatype
    // 2. Different number of parameters
    // 2. Different order of parameters
    // Can't overload by return type alone
public:
    void printFunc(int x, int y)
    {
        cout << "Sum is " << x + y << endl;
    }

    void printFunc(double x, double y)
    {
        cout << "Sum is " << x + y << endl;
    }

    void printFunc(int x, int y, int z)
    {
        cout << "Sum is " << x + y + z << endl;
    }

    void printFunc(int x, double y)
    {
        cout << "Sum is " << x + y << endl;
    }

    void printFunc(double x, int y)
    {
        cout << "Sum is " << x + y << endl;
    }
};

int main()
{
    system("cls");
    Sum p1;
    p1.printFunc(4, 5);
    p1.printFunc(31.01, 10.01);
    p1.printFunc(4, 5, 3);
    p1.printFunc(4, 22.12);
    p1.printFunc(16.04, 5);

    return 0;
}