#include<iostream>
using namespace std;

int findFirstOccurance(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == target) {
            // ans ko mid ke equal krdo
            ans = mid;
            // hai toh mid ko left kr do
            start = mid + 1;
        }
        else if(target > arr[mid]) {
            // Right me jao
            start = mid +1;
        }
        else if(target < arr[mid]) {
            end = mid - 1;
        }
        // yaha galti karonge hamesha 
        mid = (start+end)/2;
    }
    return ans;
}

int main () {
    int arr[11] = {10,20,30,30,30,40,50,60,70,80,90};
    int n = 11;
    int target = 30;

    int ansIndex = findFirstOccurance(arr, n, target);

    if(ansIndex == -1) {
        cout << "Elenent found :- " << endl; 
    }
    else {
        cout << "Element not found :- " << ansIndex << endl;
    }
    return 0;
}