#include<iostream>
using namespace std;

class calc
{
    private:
        int a,b;
    public:
        int input(int,int);
        int sum(void);
        int sub(void);
        int mul(void);
        int div(void);
};

int main()
{
    int p,q,r;
    calc x;
    calc y;
    calc z;

    cout<<"Enter three numbers : ";
    cin>>p>>q>>r;
    
    x.input(p,q);
    x.sum();

    y.input(p,q);
    y.sum();

    z.input(p,q);
    z.sum();

}

int calc::input(int p,int q)
{
    a = p;
    b = q;
}

int calc::sum()
{
    int ans=a+b;
    cout<<"Sum is "<<ans;
}

int calc::sub()
{
    int ans=a-b;
    cout<<"Sub is "<<ans;
}

int calc::mul()
{
    int ans=a*b;
    cout<<"Mul is "<<ans;
}

int calc::div()
{
    int ans=a/b;
    cout<<"Div is "<<ans;
}