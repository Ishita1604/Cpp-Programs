// Restricting Exceptions Thrown by a Function

// We can restrict the TYPE of exception to be thrown from a function to its calling statement by-
// Writing 'throw (List of argument types)' keyword to function definition
/*
Syntax

Return_type funcName(Type arg, ...) throw(Type list desired)
{
   // Function body
}

*/

// #include <iostream>
// #include <conio.h>
// using namespace std;

// void demoFunc(int num) throw(int, char) // Only 'int' and 'char' type exceptions can be thrown
// {
//     // Basically our try block
//     num += 7;
//     if (num == 7)
//         throw num;

//     else if (num > 7)
//         throw 'A';

//     else if (num < 7)
//         throw 16.23; // Terminates
// }

// void myFunc(int n) throw() // This function can throw NO exceptions!
// {
//     if (n == 1)
//         throw 1;
//     else if (n == 2)
//         throw 'a';
//     else if (n == 3)
//         throw 31.01;
// }

// int main()
// {
//     system("cls");

//     try
//     {
//         demoFunc(12);
//     }
//     catch (int i)
//     {
//         cout << "Integer exception caught" << endl;
//         cout << "Number zero was passed" << endl;
//     }
//     catch (char ch)
//     {
//         cout << "Character exception caught" << endl;
//         cout << "Number greater than zero was passed" << endl;
//     }
//     catch (float f)
//     {
//         cout << "Float exception caught" << endl; // Won't ever be caught
//         cout << "Number less than zero was passed" << endl;
//     }
//     try
//     {
//         myFunc(1);
//     }
//     catch (int i)
//     {
//         cout << "Integer exception-2" << endl;
//     }
//     catch (char ch)
//     {
//         cout << "Character exception-2" << endl;
//     }
//     catch (float f)
//     {
//         cout << "Float exception-3" << endl;
//     }

//     cout << "\nEnd of program";

//     return 0;
// }



#include <iostream>
#include <conio.h>
using namespace std;

void myFunc(int num) throw(float, string)
{
    string str = "Function";
    throw str;
}

int main()
{
    system("cls");
    try
    {
        try
        {
            myFunc(69); // Function inside throw block,
            // throw 143;
        }
        catch (string s)
        {
            cout << "String exception" << endl;
        }
        throw 143;
    }
    catch (int n)
    {
        cout << "Integer exception" << endl;
    }
    return 0;
}