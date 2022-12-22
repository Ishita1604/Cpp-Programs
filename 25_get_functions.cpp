#include<iostream>
#include<ios>       // To get stream size
#include<limits>    // To get numeric limits
using namespace std;

int main()
{
    system("cls");
    char name[10];
    char num;
    char data[20];
    /* cin.getline(variable,N) -> Reads till N-1 */
    // cin.getline(name,5);
    // cout<<name<<endl;
    /* Problem with getline() after cin>> */

    /* cin.get(variable,value) -> Reads and stores value in variable */
    // cin.get(num,25);
    // cout<<num;

    /* cin.read(variable,N) -> Reads till N */
    // cin.read(data,5);
    // cout<<data<<endl;

    /* cin.ignore() */

    return 0;
}