// Working of global and local variables
// And importance of SRO

// Scope resolution operator used => Global variable displayed!
// Without :: 'int x = 10' shows error

#include<iostream>
using namespace std;

int x = 10;
void fun()
{
	int x = 2;
	{
		int x = 1;
		cout << ::x << endl;
	}
}

int main()
{
	fun();
	return 0;
}