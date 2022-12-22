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
        // Throw ek hee baar hoga, pehla throw execute hoga
        // Different throw karane hain toh use if else
        cout << "In try 1" << endl;
        throw 10;
        cout << "In try 2" << endl;
        throw 'a';
    }
    catch (int)
    {
        cout << "Integer exception caught" << endl;
    }
    catch (char)
    {
        cout << "Character exception caught" << endl;
    }

    cout << "LAST LINE" << endl;
    return 0;
}