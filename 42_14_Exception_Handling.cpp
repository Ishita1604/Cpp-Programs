#include <iostream>
using namespace std;

int fun() throw(int)
{
    throw 10;
    // You said throw exception
    // And no way to handle it
    // So compiler threw an exception
    // Abnormal program termination
}

int main()
{
    fun();
    return 0;
}