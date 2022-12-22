#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("cls");
    // Connecting our file to hout stream
    ofstream hout("34_Sample.txt");

    // Creating a name string and filling it with string entered by user
    string name;
    cout << "Enter your name : ";
    cin >> name;

    // Writing a string to the file
    hout << name + " is my name" << endl;
    hout.close();

    // Now reading from file
    ifstream hin("34_Sample.txt");
    string st;
    getline(hin, st);
    cout << st;
    return 0;
}