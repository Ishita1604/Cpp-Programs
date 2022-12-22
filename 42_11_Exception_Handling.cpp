#include <iostream>
using namespace std;

class Test
{
    static int count;
    int id;

public:
    Test()
    {
        count++;
        id = count;
        cout << "Constructing object number " << id << endl;
        if (id == 4)
        {
            throw 4;
            // Function didn't complete and it had to leave it, due to throw, that's why object number 4 creation was incomplete
            // Hence never created so never destructed
            // The destructors are called in reverse order of constructors
            // Also, after the try block, the destructors are called only for completely constructed objects
        }
    }
    ~Test() { cout << "Destructing object number " << id << endl; }
};

int Test::count = 0;

int main()
{
    try
    {
        Test array[5];
    }
    catch (int i)
    {
        cout << "Caught " << i << endl;
    }
}
