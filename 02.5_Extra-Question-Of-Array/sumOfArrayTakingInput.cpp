#include <iostream>
using namespace std;

int main ()
{
    int arr[5];
    int n=5;
    
    cout << "Enter the indexing of Array :-- ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum+arr[i];
    }
            cout << "The sum is :-- " << sum;
}