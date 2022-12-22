// Implicit call me automated type cast done by compiler
// Explicit call me automated type cast can't be done by compiler
// "explicit" is used on constructors ONLY

#include <iostream>
using namespace std;

class Demo
{
    int value;
public:
    // explicit Demo(int v)
    Demo(int v)
    {
        value = v;
    }
    void displayFunct()
    {
        cout << value << endl;
    }
};

void printFunc(Demo d)
{
    d.displayFunct();
}

int main()
{
    system("cls");
    Demo d1(15);       // 1- Correct
    d1.displayFunct(); // 2- Correct
    Demo d2 = 16;      // 1- Wrong
    printFunc(d2);     // 2- Wrong
    // Wrong syntax but still works due to implicit type cast

    return 0;
}