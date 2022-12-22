#include <iostream>
using namespace std;

class Demo
{
    static int count; // Default value is 0

public:
    Demo()
    {
        cout << "Object created" << endl;
        count++;
        cout << "Object number: " << count << endl;
    }
};

int Demo::count;

int main()
{
    system("cls");

    Demo d1;
    Demo d2;
    Demo d3;
    return 0;
}
// Static variable
// Static member function
// When a member is declared as static its memory gets allocated once in a lifetime of program
// Value in previous function call gets carried through in next function call i.e. previous value is retained
// Called class variable in OOPS