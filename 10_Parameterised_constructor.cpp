#include<iostream>
using namespace std;

class Hero
{
    public:
    int health=10;
    char level;

    // Parameterised constructor : We can pass parameters into constructor
    // It destroys the default constructor [ramesh.Hero()]
    Hero(int health)
    {
        // Try these out :
        // this->health=health;
        cout<<"Called here"<<endl;
        // cout<<"Health is : "<<health<<endl;
        // cout<<"Health is : "<<this->health<<endl;
        cout<<"Value of this is : "<<this<<endl;
    }
    Hero(int health,char level)
    {
        this->level=level;
        this->health=health;
        cout<<"Level is : "<<level<<endl;
        cout<<"Health is : "<<health<<endl;
    }
};

int main()
{
    system("cls");
    cout<<"Before"<<endl;
    Hero ramesh(100);   // Object with parameter
    cout<<"After"<<endl;
    cout<<"\n\nAddress of 'ramesh' is : "<<&ramesh<<endl;
}

/*
'this' keyword : Stores address of current object
So 'this' is a pointer
*/

/*
#include<iostream>
using namespace std;

class Hero
{
    private:
        int health = 0;
        char level = '0';
    
    public:

        Hero(int health)
        {
            this->health = health;
        }

        Hero(int health, char level)
        {
            this->health = health;
            this->level = level;
        }

        void print()
        {
            cout<<"level is "<<level<<"\nhealth is "<<health<<endl;
        }
};

int main()
{
    Hero navy(10);
    navy.print();

    Hero ichika(10, 'A');
    ichika.print();
}
*/