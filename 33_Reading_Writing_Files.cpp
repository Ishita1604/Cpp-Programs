#include <iostream>
#include <fstream> // Header file
using namespace std;

/* Classes included in <fstream>
1. fstreambase
2. ifstream
3. ofstream
*/

/* To work with file, we have to OPEN it, There are 2 ways
1. Using constructor
2. Using member function open() of class
*/
int main()
{
    // Ya toh read ya write {Comment other}
    // OPEN file using constructor and WRITE it
    ofstream out("33_Sample.txt");                // OPEN file using constructor
    string st = "Ishita you can do this!";
    out << st;                                    // WRITE 'st' in file using cascading operator
    out << "\nHey Ishita this worked!";           // 'st' ko jaake file me WRITE kardo
    // Run and check file
    out.close();

    // OPEN file using constructor and READ it
    ifstream in("33_Sample.txt");
    string st1;                                    // String has no value
    in >> st1;                                     // File se READ karo aur 'st1' me daalo
    cout << st1;            /* Reads only ONE word */

    cout << endl;

    ifstream in2("33_Sample.txt");
    string st2;
    getline(in2, st2);      /* Reads ONE line at a time */
    cout << st2;
    in.close();

    return 0;
}

/* "33_Sample.txt"

Empty file
*/