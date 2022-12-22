// Rethrowing exception using `rethrow` keyword

#include <iostream>
#include <string.h>
using namespace std;
void Xhandler()
{
    try
    {
        throw "hello"; // Throw a char *
    }
    catch (const char *)
    {
        // Catch a char *
        cout << "Caught inside Xhandler- " << const char * << endl;
        throw; // Rethrow char *
    }
}
int main()
{
    system("cls");
    cout << "Start\n";
    try
    {
        Xhandler();
    }
    catch (const char *)
    {
        cout << "Caught inside main\n";
    }
    cout << "End";
    return 0;
}
