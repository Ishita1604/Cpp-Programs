#include<iostream>
using namespace std;

void increment(int* n)
{
    (*n)++;
}

int main()
{
    system("cls");
    int n;
    scanf("%d",&n);
    increment(&n);
    printf("%d",n);
    return 0;
}