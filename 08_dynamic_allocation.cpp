#include<iostream>
using namespace std;

class Hero
{
    int health;
    public:
    int level;
    char name[15];
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health=h;
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
    system("cls");
    Hero a;             // Static allocation
    cout<<"Health is : "<<a.getHealth()<<endl;  // -> Can access 'health' using getter
    cout<<"Level is : "<<a.level<<endl;
    a.setHealth(70);
    cout<<"Health after setting is : "<<a.getHealth()<<endl;

    /* Dynamic allocation :
    int *i=new int;
    Use * or ->
    */
    Hero *b=new Hero;   // b is a pointer to Hero-type
    cout<<"\nHealth is : "<<(*b).getHealth()<<endl;  // -> Can access 'health' using getter
    cout<<"Value of level is : "<<(*b).level<<endl;
    cout<<"\nHealth is : "<<b->getHealth()<<endl;
    (*b).setHealth(750);
    cout<<"Value of health after setting is : "<<(*b).getHealth()<<endl;

    cout<<"\n\nHealth is : "<<b->getHealth()<<endl;
}