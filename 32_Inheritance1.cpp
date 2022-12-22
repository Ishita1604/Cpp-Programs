#include <iostream>
using namespace std;

class Human
{
private:
protected:
    int age = 19;
public:
    int height;
    int weight;
};

class Male : public Human
{
protected:
    string color = "Blue";

public:
    int size = 5;
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    system("cls");
    Male m;
    // cout << m.age;
    cout << m.getAge();

    return 0;
}

// Base class ka protected 'age' inherited in derived class in public mode
// Fir getter use karna pada bcos it is now in protected mode according to table
// Agar public me hua hota toh toh 'm.age' would've worked