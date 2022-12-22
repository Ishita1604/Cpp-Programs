#include<iostream>
using namespace std;

class Hero
{
    // Properties
    private:
    int health;
    public:
    char level;
    Hero()
    {
        cout<<"Simple constructor called"<<endl;
    }
    // Parameterised constructor
    Hero(int health)
    {
        this->health=health;
    }
    Hero(int health,char level)
    {
        this->level=level;
        this->health=health;
    }

    // Our Copy constructor
    Hero(Hero& temp)
    {
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print()
    {
        cout<<"Health : "<<health<<endl;
        cout<<"Level : "<<level<<endl;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health=h;
    }
    void setLevel(int ch)
    {
        level=ch;
    }
};

int main()
{
    system("cls");
    Hero S(70,'C');
    S.print();

    // Copy constructor
    Hero R(S);
    R.print();

    return 0;
}