#include<iostream>
using namespace std;

class One
{
    int health=4;
    public:
    int level;
    char name[15];
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health=h;   // 'h' ki value health me assign (R->L)
    }
};

class Two
{
    int branch;
    public:
    int city;
};

int main()
{
    // system("cls");
    One o1;     // Instantiate o1 object of One class
    Two t;
    // cout<<"Value of health is : "<<o1.health()<<endl;     -> Can't access 'health' as it is private
    cout<<"Value of health is : "<<o1.getHealth()<<endl;  // -> Can access 'health' using getter
    cout<<"Value of level is : "<<o1.level<<endl;
    o1.setHealth(70);
    cout<<"Value of health after setting is : "<<o1.getHealth()<<endl;
}

/*
Getter function :
Private data members can't be accessed out of class
By creating getter they can be

Setter function :
Setter is used to add conditions as well
*/