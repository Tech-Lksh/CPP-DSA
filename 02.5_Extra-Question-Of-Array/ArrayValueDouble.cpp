#include<iostream>
using namespace std;

int main ()
{
    int arr[10];
    int n = 10;
    // ARRAY LELO
    for(int i=0; i<n; i++)
    {
        cout << "Enter the index value of arrar : -- " << i << " ";
        cin >> arr[i];
    }
    
    // PRINTING THE ARRAY
    cout << "Printing the value of array";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }

    //DOUBLE VALE
    cout << "Double :-- " << endl;
    for(int i=0; i<n; i++)
    {
        arr[i] = 2*arr[i];
    }

        cout << "Printing the value of array" << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}