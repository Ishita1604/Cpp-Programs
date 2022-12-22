#include<iostream>
using namespace std;

bool isEqual(int arr1[], int arr2[], int m)
{
    int a;
    for(a=0; a<m; a++)
    {
        if(arr1[a] == arr2[a])
            return true;
        else
            return false;
    }
}

int main()
{
    int m,n,i,a;
    cout<<"Enter size of 1st array : "<<endl;
    cin>>m;
    cout<<"Enter size of 2nd array : "<<endl;
    cin>>n;

    int arr1[m];
    int arr2[n];
    for(i=0; i<m; i++)
    {
        cout<<"Enter the element(s) in 1st array : ";
        cin>>arr1[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<"Enter the element(s) in 2nd array : ";
        cin>>arr2[i];
    }
    cout<<"-----------------------------\nYour arrays are ->"<<endl;
    for(i=0; i<m; i++)
        cout<<arr1[i]<<"    ";
    cout<<"\n";
    for(i=0; i<n; i++)
        cout<<arr2[i]<<"    ";
    cout<<"\n-----------------------------\n";

    
    if(m == n)      // Size is equal
    {
        // Now check for each element
        bool good = isEqual(arr1, arr2, m);
        if(good)
            cout<<"\nEQUAL ARRAYS"<<endl;
        else
            cout<<"\nUNEQUAL ARRAYS"<<endl;
    }

    else
        cout<<"\nUNEQUAL ARRAYS"<<endl;
}