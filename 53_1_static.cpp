#include <iostream>
using namespace std;

class Demo
{
    // static int count;
    int count;

public:
    void displayCount()
    {
        count++;
        cout << count << "  ";
    }
};

// int Demo::count;

int main()
{
    system("cls");

    Demo d;
    for (int i = 0; i < 5; i++)
    {
        d.displayCount();
    }

    return 0;
}

// Har baar naya variable ban ne ki jagah
// Ek hee baar variable me value update ho rahi hai