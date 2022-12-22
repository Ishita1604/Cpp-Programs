#include <iostream>
using namespace std;

class Demo
{
    mutable int i;
    int j;

public:
    void setiFunc(int x) const
    {
        i = x;
    }
    void setjFunc(int x) const
    {
        // j = x;
        // Can't be set as not mutable
    }
    void displayFunc()
    {
        cout << "Value of i is " << i << endl;
        cout << "Value of j is " << j << endl;
    }
};

int main()
{
    system("cls");
    Demo d;
    d.setiFunc(10);
    d.setjFunc(12);
    d.displayFunc();
    return 0;
}