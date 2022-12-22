#include <iostream>
using namespace std;

class A
{
private:
    int a;
    static int b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << "    " << b << endl;
    }
    static void displayData()
    {
        // cout << a;       -> Gives error as 'a' is not 'static' data member
        cout << b << endl;
    }
};
int A::b = 0; // Default value is initialised as zero    -> Very important

int main()
{
    system("cls");
    A a1(10, 20), a2(100, 200), a3(101, 305);
    a1.showData();
    a2.showData();
    a3.showData();
    // a1.displayData();
    // a2.displayData();
    // a3.displayData();
    // Notice how all showData() have just one copy as 305 bcos 'b' is 'static'
    return 0;
}

/*
1. STATIC DATA MEMBER
The 'static' keyword creates only one copy of the objects of the class
Shared memory for all objects of class
It retains value

static int b;


2. STATIC MEMBER FUNCTION
Can only access static data members else error
Can be used in main() without object too

static void showData(int p, int q)
{

}


Default value is initialised as zero
Syntax (Outside class) =>
int A::b = 0;

*/