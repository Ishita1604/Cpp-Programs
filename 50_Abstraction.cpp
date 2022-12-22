#include <iostream>
using namespace std;

// Show only necessary data and hide the implementation

class A
{
private:
    int a, b;

public:
    void setFunc(int x, int y)
    {
        a = x;
        b = y;
    }
    void sumFunc()
    {
        cout << "Sum is " << a + b << endl;
    }
};

int main()
{
    system("cls");
    A obj;
    obj.setFunc(10, 45); // User can never access `a` and `b` but can set values using `setFunc`
    obj.sumFunc();

    return 0;
}