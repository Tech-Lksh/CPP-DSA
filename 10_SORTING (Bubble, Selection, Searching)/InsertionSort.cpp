#include<iostream>
using namespace std;

int insertion(int arr[], int n) {
    int temp;
    for(int i = 0; i<n; i++) {
        temp = arr[i];
        int j;
        for (i-1; j>=0; j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
                j--;
            }
        }
        arr[j+1] = temp;
        cout << arr[i] << " ";
    }
}


int main () {
    int arr[] = {25,15,30,9,99,20,26};
    int n = 7;

    insertion(arr, n);
}