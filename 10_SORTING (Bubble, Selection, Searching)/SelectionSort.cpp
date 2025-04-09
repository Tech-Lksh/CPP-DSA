// Perform seraching sort
#include <iostream>
using namespace std;

int searchingSort(int arr[], int n) {
    int minIndex = 0;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            } 
        }
        swap(arr[i], arr[minIndex]);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {-44, 33, 98, 22, 11};
    int n = 5;

    searchingSort(arr, n);
}