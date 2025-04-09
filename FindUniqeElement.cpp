#include<iostream>
using namespace std;

int getUnique (int arr[], int size) {
    int ans = 0;
    for (int i=0; i<=size; i++) {
        ans = ans^arr[i];
    }
    cout << "Ans is :-- " << ans << endl;
    return ans;
}

int main () {
    int arr[9] = {2,11,2,3,5,3,5,6,6};
    int size = 9;
    int ans = 0;

    getUnique(arr, size);

    // int finalAns = getUnique(arr, size);
    // cout << "Final Ans :-- " << finalAns << endl;
}

// int printValue (int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         for (int j=0; j<size; j++) {
//             cout << arr[i] << ", " << arr[j] << endl;
//         }
//     }
// }

// int main () {
//     int arr[] = {10,20,30};
//     int size = 3;

//     printValue(arr, size);
// } 


// int printValue (int arr[], int size) {
//     for (int row=0; row<size; row++) {
//         for (int col=0; col<size; col++) {
//             cout << arr[row] << "," << arr[col] << endl;
//         }
//     }
// }

// int main () {
//     int arr[4] = {10, 20, 30, 40};
//     int size = 4;

//     printValue(arr, size);
// }
