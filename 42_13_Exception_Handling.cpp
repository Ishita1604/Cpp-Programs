// 2 different outputs

#include <iostream>
using namespace std;

class Test
{
public:
    Test() { cout << "Constructor of Test" << endl; }
    ~Test() { cout << "Destructor of Test" << endl; }
};

int main()
{
    system("cls");
    Test t;
    try
    {
        throw 10;
    }
    catch (int n)
    {
        cout << "Caught" << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// class Test
// {
// public:
// 	Test() { cout << "Constructor of Test" << endl; }
// 	~Test() { cout << "Destructor of Test" << endl; }
// };

// int main()
// {
// 	try
//     {
// 		Test t;
// 		throw 10;
// 	}
// 	catch (int i)
//     {
// 		cout << "Caught" << i << endl;
// 	}
// }
