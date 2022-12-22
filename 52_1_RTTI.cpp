#include <iostream>
using namespace std;

template <class T1 = int, class T2 = double, class T3 = string> // Default parameters
class Food
{
public:
    T1 order_num;
    T2 rating;
    T3 costumer_name;
    Food(){};
    Food(T1 on, T2 r, T3 cn)
    {
        order_num = on;
        rating = r;
        costumer_name = cn;
    }
    void displayFunc() // Same display function for multiple datatypes
    {
        cout << "Costumer Name: " << this->costumer_name << endl;
        cout << "Order Number: " << this->order_num << endl;
        cout << "Rating: " << this->rating << endl;
    }
};

int main()
{
    system("cls");
    Food<double> f(1.882, 9.1, "Ishita"); // Try without double, to see it type castes to int
    f.displayFunc();
    return 0;
}

/* ------------------------------------- Syntax


template <class T1, class T2, ...>
class ClassName
{
    // T1, T2 datatypes used
};

int main()
{
    ClassName<int, float, ...> obj;
}
*/