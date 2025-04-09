#include <iostream>
#include <limits.h> 
using namespace std;


int findMinimumNoInArray (int arr[], int size)
{
    //Ans store variable
    int max = INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }

     return max;
}
int main ()
{
    int arr[] = {2,34,56,1,78,43,98,57,99,94};
    int size = 10;

    int minimum = findMinimumNoInArray(arr, size);
    cout << "Minuum number is :-- " << minimum << endl;
}  

