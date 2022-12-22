#include <iostream>
using namespace std;

class scrollbar
{
private:
    int size;             // related to constness
    mutable string owner; // not relevant to constness
public:
    scrollbar(int sz, string own) : size(sz), owner(own)
    {
    }
    void setSize(int sz) // changes size
    {
        size = sz;
    }
    void setOwner(string own) const // changes owner
    {
        owner = own;
    }
    int getSize() const // returns size
    {
        return size;
    }
    string getOwner() const // returns owner
    {
        return owner;
    }
};
int main()
{
    // create constant object
    const scrollbar obj(60, "Window1");
    // obj.setSize(100); //Error
    obj.setOwner("Window2"); // this is OK
    cout << obj.getSize() << ", " << obj.getOwner() << endl;
    return 0;
}
