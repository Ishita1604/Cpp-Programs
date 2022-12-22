#include<iostream>
using namespace std;
int c=45;        // Global variable
int main()
{
    // int a,b;
    // cout<<"Enter value of a : ";
    // cin>>a;
    // cout<<"Enter value of b : ";
    // cin>>b;
    // int c;       /* In C++, define where needed works */
    // c=a+b;
    // cout<<"Sum of a and b is "<<c<<endl;
    // cout<<"Value of Local c is "<<c<<endl;
    // cout<<"Value of Global c is "<<::c<<endl;
    // return 0;

    float d=34.3;         // Float type variable obv as declared
    long double e=34.3;   // Double declared
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    cout<<"The size of 34.4 is "<<sizeof()

    return 0;

    /* If I write 'd=34.3' and check its type, it would be 'Double' and 'NOT Float' (For e.g. pass kiya as argument OR in overloading), To make it Float -> '34.3f', Long Double -> '34.3l' */
}