#include<iostream>
using namespace std;

void reversAnArray (int arr[], int size) {
        int left = 0;
        int right = size-1;
        while (left <= right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        // Printing Array
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
}
int main (){
    int arr[6] = {5,10,15,20,25,30};
    int size = 6;
    reversAnArray(arr, size);
}

// Using For loop To Reverse Array
// int reverseArray (int arr[], int size) {
//     // Initialization for loop
//     for(int left=0, right=size-1; left<=right; left++, right--) {
//         swap(arr[left], arr[right]);
//     }
//     for(int i=0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
// }

// int main () {
//     int arr[13] = {2,4,6,8,10,12,14,90,80,70,60,50,30};
//     int size = 13; 
//     reverseArray (arr, size);
// }