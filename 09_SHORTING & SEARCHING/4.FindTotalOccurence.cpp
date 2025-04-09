#include<iostream>
using namespace std;
 int findOccurance(int arr[], int n, int target) {
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

int findTotalOccurence(int arr[], int n, int target) {
    int firstOcc = findTotalOccurence(arr, n, target);
    int lastOcc = findTotalOccurence(arr, n, target);
    int total = lastOcc - firstOcc +1;
    return total;
}
int main () {
    int arr[] = {10,20,30,30,30,30,30,40,50,60};
    int n = 10;
    int target = 10;
    int ansIndex = findTotalOccurence(arr, n, target);
    int ans = findTotalOccurence(arr, n, target);
    cout << "Total occ is :- " << ans << endl;

    if(ansIndex == -1) {
        cout << "Element not found :- " << endl;
    }
    else {
        cout  << "Element is found :- " << ansIndex << endl;
    }
    return 0;
}