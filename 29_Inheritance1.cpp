// When attributes and methods of a class used repeatedly
// It can be derived into other classes
// This is called inheritance

#include<iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut! \n";
    }
};

// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

// Driver code
int main()
{
    Car myCar;
    myCar.honk();
    string p = myCar.brand;
    cout<<p<<endl;
    cout << myCar.brand + " " + myCar.model;
    return 0;
}