#include <iostream>
using namespace std;

void readVect(int *vector, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> vector[i];
    }
}

void showVect(int *vector, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << vector[i] << "  ";
    }
}

void addVect(int *a, int *b, int *c, int size)
{
    for (int i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }
}

int main()
{
    system("cls");
    int vectSize;
    cout << "Enter the size of vector: ";
    cin >> vectSize;
    int *x, *y, *z; // Vectors of pointer to integer type
    x = new int(vectSize);
    y = new int(vectSize);
    z = new int(vectSize);
    cout << "Enter the elements in 1st vector: ";
    readVect(x, vectSize);
    showVect(x, vectSize);
    cout << "\nEnter the elements in 2nd vector: ";
    readVect(y, vectSize);
    showVect(y, vectSize);
    addVect(x, y, z, vectSize);
    cout << "\nAddition is:" << endl;
    showVect(z, vectSize);
    // Free memory allocated to all three vectors
    delete x;
    delete y;
    delete z;

    return 0;
}