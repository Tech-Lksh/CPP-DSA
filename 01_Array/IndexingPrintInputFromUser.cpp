// TAKING INPUT IN AN ARRAY IN USER 

#include<iostream>
using namespace std;

int main ()
{
    int arr [10];
    int n = 10;

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of indexing :-- " << i << " - ";
        cin >> arr[i];
        cout << endl;
    }

    // PRINTING AN ARRAY
    cout<<"Printing the Array :-- "<<endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}