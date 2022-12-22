// WITHOUT RETURN :
#include<iostream>
using namespace std;

int sum(int,int);

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    sum(a,b);
}

int sum(int a,int b)
{
    int sum=a+b;
    cout<<"Sum is "<<sum;
}

/* WITH RETURN :

#include<iostream>
using namespace std;

int sumf(int,int);

int main()
{
    int a,b,sum;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    sum=sumf(a,b);
    cout<<"Sum is "<<sum;
}

int sumf(int a,int b)
{
    int sum=a+b;
    return sum;
}
*/