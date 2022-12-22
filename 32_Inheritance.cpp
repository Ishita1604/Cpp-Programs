#include <iostream>
using namespace std;

class Human
{
private:
    int height;
    int weight;

protected:
    int age;

public:
};

class Male : public Human
{
private:
    string color;

public:
    void sleep()
    {
        cout << "\nMan sleeping" << endl;
    }
    void setAge(int a)
    {
        this->age = a;
    }
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    system("cls");
    Male object1;
    object1.setAge(19);
    cout << object1.getAge();
    object1.sleep();

    return 0;
}