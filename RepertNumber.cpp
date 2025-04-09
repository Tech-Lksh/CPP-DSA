#include<iostream>
using namespace std;

int repertNum(int arr[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[j] << " ";
                break;
            }
        }
    }
}
int main () {
    int arr[6] = {1,3,4,2,1,1};
    int size = 6;

    repertNum(arr, size);
}
