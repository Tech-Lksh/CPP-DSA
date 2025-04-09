#include<iostream>
using namespace std;

void printNegPosNum(int arr[], int size) {
    int j=0;
    for(int i=0; i<size; i++) {
        if(arr[i] < 0) {
            swap(arr[i], arr[j]); 
            j++;
        }
    }
}
int main () {
    int arr[7] = {23,10,-11,-24,-56,30,40};
    int size = 7;

    printNegPosNum(arr, size);

    cout << "Printing the array" << endl;
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}  