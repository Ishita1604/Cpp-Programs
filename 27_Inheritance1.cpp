#include <iostream>

using namespace std;
class P
{
public:
    void print()
    {
        cout << " Inside P::";
    }
};

class Q : public P
{
public:
    void print()
    {
        cout << " Inside Q";
    }
};

class R : public Q
{
public:
    void print()
    {
        cout << " Inside R";
    }
};

int main(void)
{
    R r;
    Q q;
    P p;
    r.print();
    cout << "Hey" << endl;
    cout << sizeof(P) << endl;
    cout << sizeof(Q) << endl;
    cout << sizeof(R) << endl;

    q.print();
    p.print();
    return 0;
}