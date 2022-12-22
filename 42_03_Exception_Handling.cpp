#include <iostream>
#include <conio.h>
#include <typeinfo>
using namespace std;

int main()
{
    system("cls");
    cout << "WELCOME" << endl;

    try
    {
        int x = 10;
        if (x == 1)
            throw 1;
        if (x == 2)
            throw 2;
        if (x == 3)
            throw 2;
        if (x == 10)
            throw 4;
    }
    catch (int n)
    {
        cout << "Integer exception caught" << endl;
        cout << "Exception number: " << n << endl;
    }
    catch (char)
    {
        cout << "Character exception caught" << endl;
    }
}