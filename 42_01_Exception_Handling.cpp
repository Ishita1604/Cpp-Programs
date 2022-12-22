#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    cout << "WELCOME" << endl;

    try
    {
        // Statements to monitor for exception written here ...
        cout << "In try 1" << endl;
        throw 10; // Once thrown, next line not executed
        cout << "In try 2" << endl;
    }
    catch (int) // Not a function
    {
        cout << "Exception caught" << endl;
    }

    cout << "Last line" << endl;
    return 0;
}