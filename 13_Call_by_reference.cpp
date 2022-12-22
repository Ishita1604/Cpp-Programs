#include <iostream>
using namespace std;

void update1(int);
void update2(int *);
void update3(int &);
int main()
{
    int i, j, k;
    i = j = k = 5;
    update1(i);  // Call by value
    update2(&j); // Call by pointer
    update3(k);  // Call by reference
    cout << "\n i = " << i;
    cout << "\n j = " << j;
    cout << "\n k = " << k;
}
void update1(int a)
{
    a = a + 1;
    cout << "\n a = " << a;
}
void update2(int *b)
{
    *b = *b + 1;
    cout << "\n *b = " << *b;
}
void update3(int &c)
{
    c = c + 1;
    cout << "\n c = " << c;
}
