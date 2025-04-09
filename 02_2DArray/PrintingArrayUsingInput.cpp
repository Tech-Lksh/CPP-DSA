#include<iostream>
using namespace std;

int main () {
    int arr[3][3];
    int row = 3;
    int col = 3;
    int sum = 0;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << "Enter Row index:-- "<< i << " " << "Enter colum index:-- " << j << endl;
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            sum = sum + arr[i][j];
        }
    }
    cout << sum;
    return 0;
}