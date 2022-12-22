#include <iostream>
#include <conio.h>
// #include <cstring>
#include <typeinfo>
using namespace std;

int main()
{
    system("cls");

    int x = 10;
    char y = 'a';
    float z = 23.16;
    double p = 1000000;
    string q = "Ishita";
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(q).name() << endl;

    return 0;
}