#include <iostream>
using namespace std;

int main()
{
	int *numbers = new int[100];
	// int numbers[100] = {};
	for (int i = 0; i < 5; i++)
	{
		cin >> numbers[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}
	return 0;
}