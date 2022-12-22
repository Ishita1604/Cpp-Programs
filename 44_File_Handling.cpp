#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream MyFile;

    // MyFile.open("file44.txt", ios::out); // Write
    // if (MyFile.is_open())
    // {
    //     MyFile << "I am writing from program into file\n";
    //     MyFile << "2nd line\n";
    //     MyFile.close();
    // }

    // MyFile.open("file44.txt", ios::app); // Append, else over-write
    // if (MyFile.is_open())
    // {
    //     MyFile << "This is appended\n";
    //     MyFile.close();
    // }

    MyFile.open("read44.txt", ios::in); // Read
    if (MyFile.is_open())
    {
        string line;
        while (getline(MyFile, line))
        {
            cout << line << endl;
        }
        MyFile.close();
    }

    system("pause>0");
}