/*
BOOK- Exception can be thrown from outside try block as long as it is thrown by a function called from within try block

Exception thrown from outside try of main
By creating a function that throws
Function called in main
*/

/* Ismein ek limitation hai jaise kee ek throw ho jata hai main ke try mein, woh main ke try se bahar nikal jata hai
So if main try me aur bhi fucntion call hain, toh voh nahi hongi
*/


#include <iostream>
#include <string.h>
using namespace std;

void Xtest(int test)
{
    cout << "Inside Xtest, test is: " << test << "\n";
    if (test)
        throw test;
}
int main()
{
    cout << "Start\n";
    try
    {
        cout << "Inside try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch (int i)
    {
        cout << "Caught an exception" << endl << "Value is: " << i << endl;
    }
    cout << "End";
    return 0;
}



/*
BOOK- A try block can be localized to a function, when this is the case, each time the function is entered, the exception handling relative to that function is reset

(Basically means reset hone ke baad har value display hogi fir)
*/

/* 2nd method hai function outside main me hee try-catch banalo
IMO better to have try-catch in a function
To get all values displayed
*/



// #include <iostream>
// #include <string.h>
// using namespace std;

// void Xtest(int test)
// {
//     try
//     {
//         cout << "Inside try block\n";
//         cout << "Inside Xtest, test is: " << test << "\n";
//         if (test)
//             throw test;
//     }
//     catch (int i)
//     {
//         cout << "Caught an exception" << endl << "Value is: " << i << endl;
//     }
// }
// int main()
// {
//     cout << "Start\n";

//     Xtest(0);
//     Xtest(1);
//     Xtest(2);
//     cout << "End";

//     return 0;
// }