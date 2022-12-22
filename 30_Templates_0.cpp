// Function Overloading
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return (a + b);
}
float sum(float a, float b)
{
    return (a + b);
}
// char sum(char a,char b)
// {
//     return (a+b);
// }
int sum(char a, char b)
{
    return (a + b);
}

int main()
{
    system("cls");
    int x = 5, y = 10;
    int z = sum(x, y);
    cout << "\nSum of two int variables is " << z << endl;

    float f1 = 5.1, f2 = 10.2;
    float f = sum(f1, f2);
    cout << "\nSum of two float variables is " << f << endl;

    char c1 = 'a', c2 = 'b';
    int i = sum(c1, c2);
    cout << "\nSum of two char variables is " << i << endl;

    char c3 = 'a', c4 = 'b';
    char c = sum(c3, c4);
    cout << "\nSum of two char variables is " << c << endl;

    c = char(i);
    cout << c << endl;

    return 0;
}