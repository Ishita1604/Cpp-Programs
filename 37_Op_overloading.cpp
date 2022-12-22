#include <iostream>
using namespace std;

class Quadratic
{
private:
    int a, b, c;

public:
    Quadratic()
    {
        a, b, c = 0;
    }
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void showData()
    {
        cout << a << "x2 + " << b << "x + " << c << endl;
    }
    void operator<<(Quadratic q)
    {
        cout << a << "x2 + " << b << "x + " << c << endl;
    }
    Quadratic operator+(Quadratic d)
    {
        Quadratic temp;
        temp.a = a + d.a;
        temp.b = b + d.b;
        temp.c = c + d.c;
        return temp;
    }
    Quadratic operator-(Quadratic d)
    {
        Quadratic temp;
        temp.a = a - d.a;
        temp.b = b - d.b;
        temp.c = c - d.c;
        return temp;
    }
    // void operator<<(Quadratic d)
    // {
    //     cout << a << "x2 + " << b << "x + " << c << endl;
    // }
};

int main()
{
    system("cls");
        Quadratic q1, q2, q3, q4;
        q1.setData(1, 2, 3);
        q1.showData();
        q2.setData(6, 9, 3);
        q2.showData();
        q3 = q1 + q2;
        q3.showData();
        q4 = q1 - q2;
        q4.showData();
        q4.showData();
        return 0;
}