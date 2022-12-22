/*
Object : Entity with properties and behaviour
Class : User-defined data-type
Eg.
int num
char ch
str name
-> Hero Ramesh
*/

/*
"." -> Dot operator/ Member access operator -> To access data members
"::" -> Scope resolution operator
*/

/*
Access modifiers :
Public -> Class ke sath bhi, class ke baad bhi
Private -> Only inside class (By default)
Protected
*/

#include<iostream>
using namespace std;

class Hero
{
    // Properties
    int health;         // 4
    int level;          // 4
    char name[15];      // 8
};

class Empty
{

};

int main()
{
    system("cls");
    // Creation of object
    Hero h1;
    cout<<"Size of 'h1' object of 'Hero' class is "<<sizeof(h1)<<endl;
    Empty e1;
    cout<<"Size of e1 is "<<sizeof(e1)<<endl;    // Object of empty class STILL gets 1 BYTE memory
    cout<<"I found something so fun today!"<<endl;
    return 0;
}