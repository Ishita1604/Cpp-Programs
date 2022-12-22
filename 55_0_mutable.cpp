#include <iostream>
using namespace std;

class Order
{
    string costumer_name;
    mutable string placed_order;
    mutable float bill;
    int table_no;

public:
    Order(string s, string po, float b, int i)
    {
        costumer_name = s;
        placed_order = po;
        bill = b;
        table_no = i;
    }
    void displayOrder() const
    {
        cout << costumer_name << endl;
        cout << placed_order << endl;
        cout << table_no << endl;
        cout << bill << endl;
    }
    void changePlacedOrder(string po_new) const
    {
        placed_order = po_new;
    }
    void changeBill(int b_new) const
    {
        bill = b_new;
    }
};

int main()
{
    system("cls");
    Order o1("Ishita", "Fries", 299, 12);
    o1.displayOrder();
    cout << "CHANGING YOUR ORDER ..." << endl;
    o1.changePlacedOrder("Pizza");
    o1.changeBill(599);
    o1.displayOrder();
    return 0;
}

// Agar "const" member function ke data members ko change karna hee hai
// Even tho "const" is used so change can't be made
// Can be achieved through mutable