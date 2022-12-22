#include<iostream>
using namespace std;

class Box
{
    private:
    int length;
    int* breadth;
    int height;
    public:
    Box()
    {
        cout<<"Default Copy Constructor called"<<endl;
        breadth=new int;
    }
    void setData(int length,int breadth,int height)
    {
        this->length=length;
        this->breadth=&breadth;
        this->height=height;
    }
    void showData()
    {
        cout<<"Length : "<<length<<endl;
        cout<<"Breadth : "<<*breadth<<endl;
        cout<<"Height : "<<height<<endl;
    }
};

int main()
{
    Box B1;
    B1.setData(20,30,40);
    cout<<"B1"<<endl;
    B1.showData();
    cout<<"B2"<<endl;
    Box B2(B1);
    B2.showData();  // Copy hee nahi hui breadth
    cout<<"B2 changed"<<endl;
    B2.setData(69,69,69);
    B2.showData();
    cout<<"B1"<<endl;
    B1.showData();  // B1 also changed
    cout<<"B1 values entered"<<endl;
    B1.setData(100,100,100);
    B1.showData();
    cout<<"B1"<<endl;
    B1.showData();
    Box B3;
    B3.setData(1434,100,100);
    cout<<"B3"<<endl;
    B1.showData();

    return 0;
}