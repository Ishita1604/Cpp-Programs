#include<iostream>
#include<cstring>
using namespace std;

class Hero
{
    // Properties
    private:
    int health;
    public:
    char* name;    // Not char name[100]
    char level;
    Hero()
    {
        cout<<"Simple constructor called"<<endl;
        name=new char[100];
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

    // Default copy constructor
    // In-built

    void print()
    {
        cout<<endl;
        cout<<"[ Name : "<<this->name<<", ";
        cout<<"Health : "<<this->health<<", ";
        cout<<"Level : "<<this->level<<" ]";
        cout<<endl<<endl;
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
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
};

int main()
{
    system("cls");
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]="Babbar";
    hero1.setName(name);
    hero1.print();

    // Default copy constructor
    Hero hero2(hero1);                  // Hero hero2=hero1;
    hero2.print();
    
    // Changes in 'hero1'
    hero1.name[0]='G';
    hero1.print();

    // Observe 'hero2'
    hero2.print();

    return 0;
}