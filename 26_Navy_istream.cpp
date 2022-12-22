#include <iostream>
using namespace std;

class Height
{
private:
    int feet;
    int inches;

public:
    Height()    // Constructor to initialize values
    {
        feet = 0;
        inches = 0;
    }

    friend istream &operator>>(istream &input, Height &H)   // Overloading >> operator
    {
        input >> H.feet >> H.inches;
        return input;
    }

    friend ostream &operator<<(ostream &output, const Height &H)    // Overloading << operator
    {
        output << H.feet << "F " << H.inches << "I";
        return output;
    }
};

int main()
{
    Height P1;

    cout << "Enter Height : " << endl;
    cin >> P1;                           // Using overloaded >>
    cout << "Height : " << P1 << endl;   // Using overloaded <<

    return 0;
}