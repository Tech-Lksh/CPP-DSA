// Code of bublle short

#include<iostream>
using namespace std;

int bubbleSort(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}


int main () {
    int arr[] = {44,33,55,22,11};
    int size = 5;

    bubbleSort(arr, size);
    
} 