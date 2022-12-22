// Catching exception of class type
// Defining own exception class

#include <iostream>
#include <string.h>
using namespace std;

class MyException
{
public:
    char str_what[80];
    int what;
    MyException()
    {
        *str_what = 0;
        what = 0;
    }
    MyException(char *s, int e)
    {
        strcpy(str_what, s);
        what = e;
    }
};
int main()
{
    system("cls");
    int i;
    try
    {
        cout << "Enter a positive number: ";
        cin >> i;
        if (i < 0)
            throw MyException("Not Positive", i);
    }
    catch (MyException e)
    {
        cout << e.str_what << ": ";
        cout << e.what << "\n";
    }
    return 0;
}