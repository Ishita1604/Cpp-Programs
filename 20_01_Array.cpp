#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int arr[100] = {1, 2, 3, 4, 5}; // Array name `arr` is pointer to 1st element location
    cout << arr << endl;
    cout << *arr << endl;

    // Character array is special array called String
    char c_array[100] = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << c_array << endl;
    cout << *c_array << endl;

    double d_array[100] = {5.1, 10.1, 31.1, 16.4, 22.12};
    cout << d_array << endl;
    cout << *d_array << endl;

    bool b_array[100] = {false, true};
    cout << b_array << endl;
    cout << *b_array << endl;

    return 0;
}
// Array- Collection of variables of similar types at contiguous memory locations