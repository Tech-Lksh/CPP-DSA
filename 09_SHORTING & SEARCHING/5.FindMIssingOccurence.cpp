#include<iostream>
using namespace std;

int fintMissingOccurence(int arr[], int n) {
    int st = 0;
    int ed = n-1;
    int mid = st + (st-ed)/2;
    int ans = -1;

    while(st <= ed) {
        int diff = arr[mid] - mid;

        if(diff == 1) {
            // right jao
            st = mid+1;
        }
        else {
            // ans  store
            ans = mid;
            // left jao
            ed = mid - 1;
        }
        mid = st +(st-ed)/2;
    }
    return ans;
}

int main () {
    int arr[] = {1,2,3,4,6,7,8,9};
    int n = 9;

    cout << " ans found :- " << fintMissingOccurence(arr, n);
}