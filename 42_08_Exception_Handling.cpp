// Catch all exceptions
// Always used at end of parameterized catch blocks
// Else compile time error

#include <iostream>
#include <string.h>
using namespace std;

void xHandler(int test)
{
    try
    {
        if (test == 0)
            throw 1234;
        if (test == 1)
            throw 'A';
        if (test == 2)
            throw 16.23;
    }
    catch(int i)
    {
        cout << "Integer exception caught!" << endl;
    }
    catch(double d)
    {
        cout << "Double exception caught!" << endl;
    }
    catch (...)
    {
        cout << "Exception caught!" << endl;
    }
}

int main()
{
    system("cls");
    xHandler(0);
    xHandler(1);
    xHandler(2);
    // Everytime function call made so it goes again to check try block
    // Not like it is checking 2nd and 3rd if block after throw!

    return 0;
}