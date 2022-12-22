#include<iostream>
using namespace std;

class sumc
{
    private:
        int a,b;
    public:
        int sum(int,int);
        int input(int,int);
};

int sumc::sum(int a,int b)         // 'sumc' class ka hee object 'sumf' function use kar sakta hai
{
    int sum=a+b;
    cout<<"Sum is "<<sum;
}

int sumc::input(int a,int b)
{

}

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    sumc.sumf();
}