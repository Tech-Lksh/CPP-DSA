#include<iostream>
using namespace std;


void negSide(int arr[], int size) {
    int left = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] < 0) {
            swap(arr[i], arr[left]);
            left++;
        }
        // cout << arr[i];
    }
}
// void printArray(int arr[], int size) {
//     for()
// }
int main () {
    int arr[] = {3,-2,4,6,-7};
    int size = 5;

    negSide(arr, size);
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}