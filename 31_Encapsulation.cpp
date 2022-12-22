#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    float salary;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    system("cls");
    cout << "Sab sahi chal raha hai!" << endl;
    return 0;
}