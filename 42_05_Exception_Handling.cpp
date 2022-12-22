// Rethrowing exceptions
// Inner & outer try-catch or NESTED TRY-CATCH
// Exception thrown from inner to outer catch block is called RETHROWING
// The inner catch block THROWS here

/*
Syntax
try
{
    try
    {
        // Statements
        throw val;
    }
    catch (Type1 arg)
    {
        // Catches 'val'
        throw val;
    }
}
catch (Type1 arg)
{
}
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int a = 1;
    try
    {
        try
        {
            throw a;
        }
        catch (int x)
        {
            cout << "Exception caught in inner try-catch" << endl;
            throw x; // Jo catch hua tha i.e. 'x' VOH HEE THROW kiya
        }
    }
    catch (int n)
    {
        cout << "Exception caught in outer try-catch" << endl;
    }
    cout << "\nEnd of program";

    return 0;
}