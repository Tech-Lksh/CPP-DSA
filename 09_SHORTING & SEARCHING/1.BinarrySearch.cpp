#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    
    while(start <= end) {
        if(arr[mid] == target) {
            // Target Found
            return mid;
        }
        else if(arr[mid] < target) {
            // right me aage jao
            start = mid + 1;
        }
        else if(arr[mid] > target) {
            // left me peeche jao
            end = mid - 1;
        }

        // warna phir me mid ko update karo
        mid = (start + end)/2;
    }
    // agr yaha tk pohohche ho
    // iska mtlb element nhi mila tumhe
    return -1;
}

int main () {
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int target;
    cout << "Enter The Target value :- ";
    cin >> target;

    

    int ansIndex = binarySearch (arr, n, target);
    if(ansIndex == -1) {
        cout << "Element not fount" << endl;
    }
    else {
        cout << "Element found at Index: " << ansIndex << endl;
    }
}

