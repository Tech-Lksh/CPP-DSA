#include <iostream>
using namespace std;

void shiftArraryBy01 (int arr[], int size) {
    // step no 1
    int temp = arr[size-1];
    
    // step 2
    // Shift -> arr[i] = arr[i-1]
    for (int i=size-1; i>=1; i--) {
        arr[i] = arr[i-1];
    }

    // step no 3 copy into 0th index
    arr[0] = temp;
}

int main () {
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;
    
    shiftArraryBy01 (arr, size);
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}


