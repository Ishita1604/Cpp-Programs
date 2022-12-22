#include<iostream>
using namespace std;

class Box
{
    private:
    int length;
    int breadth;
    int height;
    public:
    // void defaultCopyConstructor(int length,int breadth,int height)
    Box()
    {
        cout<<"Default Copy Constructor called"<<endl;
        this->length=length;
        this->breadth=breadth;
        this->height=height;
    }
    void setData(int a,int b,int c)
    {
        length=a;
        breadth=b;
        height=c;
    }
    void showData()
    {
        cout<<"Length : "<<length<<endl;
        cout<<"Breadth : "<<breadth<<endl;
        cout<<"Height : "<<height<<endl;
    }
};

int main()
{
    system("cls");
    Box B1;
    B1.setData(5,10,15);
    B1.showData();
    // Copy after initialisation -> Default Copy Constructor called
    cout<<endl;
    Box B2;
    B2=B1;
    B2.showData();
    cout<<endl;
    // Copy while initialisation -> Default Assignment Operator called
    Box B3=B1;
    B2.showData();
    cout<<endl;

    Box B4;
    // B4(B1);      -> Why shows error?
    B4.showData();
    cout<<endl;
    Box B5(B1);
    B5.showData();
    cout<<endl;

    return 0;
}