#include <iostream>
using namespace std;

class A
{
private:
    int length = 1;

public:
    A(int l)
    {
        length = l;
    }
    int getLength()
    {
        return length;
    }
    void showLength()
    {
        cout << length << endl;
    }
    void setLength()
    {
        length = 100;
    }
};

int main()
{
    system("cls");
    A a1(20);
    a1.getLength();
    a1.showLength();
    a1.setLength();
    a1.showLength();
    return 0;
}