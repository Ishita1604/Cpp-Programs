#include<iostream>
using namespace std;

class Hero
{
    public:
    int health=0;
    char level='A';

    Hero(int health)
    {
        cout<<"CONSTRUCTOR-1 CALLED"<<endl;
        // Does nothing
    }
    Hero(int health,char level)
    {
        cout<<"CONSTRUCTOR-2 CALLED"<<endl;
        this->level=level;
        this->health=health;
    }
    void print()
    {
        cout<<"Level is : "<<level<<endl;
        cout<<"Health is : "<<health<<endl;
    }
};

int main()
{
    system("cls");
    cout<<"BEFORE"<<endl;
    Hero ishita(4);           // Won't make health 4
    cout<<"AFTER"<<endl;
    ishita.print();

    Hero ramesh(100);         // Won't make health 100
    ramesh.print();

    Hero siya(100,'B');
    siya.print();

    // Copy constructor :
    cout<<"\n"<<endl;
    Hero navy(siya);
    navy.print();
}

/*
Copy constructor :
Gets created at time of object creation by itself
So when we create an object, uska copy constructor apne aap create ho jata hai
*/