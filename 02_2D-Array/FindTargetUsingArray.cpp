#include<iostream>
using namespace std;

int main ()
{
    int arr[5] = {2,4,6,8,10};

    int target;
    cout << "Choose the value of target :-- ";
    cin >> target;

    int n = 5;

    bool flag = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == target)
        {
            // found
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        cout << "Target found ";
    }

    else
    {
        cout << "Target not found" << endl;
    }

    return 0;
}