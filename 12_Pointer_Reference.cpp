#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int a=5;
    a++;        // Changes in variable are reflected in pointer and reference
    int *p=&a;  // Here p is pointer to a
    cout<<"p is "<<p<<endl;
    cout<<"*p is "<<*p<<endl;

    int &q=a;   // Here q is reference to a
    cout<<"q is "<<q<<endl;
    cout<<"&q is "<<&q<<endl;

    int b=69;
    int *p2;
    p2=&b;
    cout<<"\n&b is "<<&b<<endl;
    cout<<"p2 is "<<p2<<endl;
    cout<<"*p2 is "<<*p2<<endl;

    /* Throws error bcos can't DECLARE reference in one line and INITIALISE in next, has to be in one line */
    // int b=69;
    // int &q2;
    // q2=b;

    /* A variable can have multiple references, and changes in one reference is reflected in ALL */
    int c=143;
    int &x=c;
    int &y=c;
    int &z=c;
    // &q=c;    -> Error bcos once a reference refers to a variable, it CAN'T refer to another
    // But pointer can be :
    p2=&c;
    cout<<"\n&c is "<<&c<<endl;
    cout<<"p2 is "<<p2<<endl;

    cout<<"\nc="<<c<<" x="<<x<<" y="<<y<<" z="<<z<<endl;
    x=1430;
    cout<<"\nc="<<c<<" x="<<x<<" y="<<y<<" z="<<z<<endl;
    c++;
    cout<<"\nc="<<c<<" x="<<x<<" y="<<y<<" z="<<z<<endl;
}

/*
Difference :
Pointer has to be de-referenced before accessing a value with it
Reference is like giving a nick-name/ alias to that variable
Reference must always be INITIALISED in same line, unlike pointer
Pointer can point to more than one variable
*/