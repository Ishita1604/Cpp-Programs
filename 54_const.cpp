#include <iostream>
using namespace std;

class Test
{
    int value = 0;

public:
    Test(int n) { value = n; };
    int valueFunc() const
    {
        // value = 100;
        // Gives compiler error if we try change the value
        return value;
    }
};

int main()
{
    system("cls");
    Test obj(10);
    cout << obj.valueFunc() << endl;
    Test obj2(20);
    cout << obj2.valueFunc() << endl;;
    return 0;
}
// "const" used so we can't change the object from which function is called
// Avoid accidental changes