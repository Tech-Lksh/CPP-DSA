#include<iostream>
using namespace std;

void useInput (int arr[], int size, int sum) {
    for (int i=0; i<size; i++) {
        cout << "Entr the value of Array :-- " << i << "- ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Value of sum :-- " << sum;
}

int main () {
    int arr[6];
    int size = 6;
    int sum = 0;

    useInput (arr, size, sum);
}
