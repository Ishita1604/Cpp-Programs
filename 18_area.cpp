#include <iostream>
using namespace std;

class Box
{
	public:
	int length=10;
	int breadth=20;
	void dispArea(int l,int b)
	{
		this->length=l;
		this->breadth=b;
		int area=l*b;
		cout<<"Area is "<<area<<endl;
	}
};

int main()
{
	system("cls");
	Box B1;
	B1.dispArea(1,2);
	
	Box B2;
	B2.dispArea(10,10);

    return 0;
}