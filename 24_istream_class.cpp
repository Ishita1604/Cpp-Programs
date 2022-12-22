#include<iostream>
using namespace std;
class istream
{
    void operator>>(void &obj)
    {

    }
};

class ostream
{
    void operator<<(void &obj)
    {
        
    }
};

int main()
{
    system("cls");
    char data[100];
    char name[10];
    cout<<"Enter the data : ";
    cin>>data;
    cout<<"Data entered by the user"<<endl<<data;
    cin.getline(name,5);
    cout<<name;
}