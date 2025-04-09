#include<iostream>
using namespace std;

// int countNegative(int arr[], int n) {
//     int count = 0;
//     for(int i = 0; i<n; i++) {
//         if(arr[i] < 0) {
//             count++;
//         }
//     }
//     cout << "count is :- " << count;
// }
// int main() {
//     int arr[] = {-1,2,3,-2,-4,-5,7,-7,-8,-9};
//     int n  =10;

//     countNegative(arr, n);
// }


// int sum(int arr[], int n) {
//     int s = 0;
//     // int e = n;

//     while(s < n-1) {
//         cout << arr[n];
//         s++;
//     }
//     return {};
// }
// int main () {
//     int arr[] = {1,2,3,4,5};
//     int n = 5;

//     cout << sum(arr, n);
// }



int sum(int n) {
    int sum = 0;
    int i = 0;
    while(i < n) {
        sum = sum+i;
        i++;
    }
    cout<<sum << " ";
}
int main() {
    int n = 5;
    sum(n);
}