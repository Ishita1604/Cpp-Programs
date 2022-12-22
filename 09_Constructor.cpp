
#include<iostream>
using namespace std;

class Hero
{
    public:
    int health=10;
    Hero()
    {
        cout<<"My constructor"<<endl;
        cout<<"Enter health : "<<endl;
        cin>>health;
    }
};


int main()
{
    cout<<"Before"<<endl;
    Hero ramesh;
    cout<<"After"<<endl;
    cout<<ramesh.health<<endl;

    Hero *ram=new Hero;
    cout<<"Dynamic health : "<<(*ram).health<<endl;
    // ramesh.Hero() default constructor get created (Empty)
    // When object is created, constructor invoked (Apne aap call hota hai)
    // Jaise hee
    // No return-type
    // Special function
}