#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    Hero()
    {
        cout << "\nSimple constructor called" << endl;
        name = new char[100]; // Dynamic allocation
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        // Deep copy
        char *ch = new char[strlen(temp.name)];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "\nCopy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
        // this->name=temp.name;
    }

    void print()
    {
        cout << "\nHealth : " << this->health << endl;
        cout << "Level : " << this->level << endl;
        cout << "Name : " << this->name << endl;
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
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
        // Function to copy string, strcpy(a,b) -> Copies contents of b in a, header used is string.h
    }
};

int main()
{
    Hero h1;
    h1.setHealth(70);
    h1.setLevel('D');
    char name[7] = "Babbar";
    h1.setName(name);
    h1.print();

    // Default copy constructor
    Hero h2(h1); // h2 is copy of h1
    h2.print();

    // Object h1 mein changes kare
    h1.name[0] = 'G';
    h1.print();

    // Printing object h2 -> Change bas h1 mein kiya, still h2 bhi change ho gaya : SHALLOW COPY
    h2.print();

    // DEEP COPY :
    // Comment out in Deep copy
}

/*
SHALLOW COPY -> Created copy has same address as initial -> So changes in one reflected in other
-> Default copy constructor & Assignment operator

DEEP COPY -> Created copy has all memory resources BUT different memory allocated -> So when we access initial object, 2nd UNCHANGED
-> Must define explicit copy constructor & dynamically allocate memory (If needed)


Refer :
Shallow_Diagram.png
Deep_Shallow_Diagram.png
Navy's code on discord */
