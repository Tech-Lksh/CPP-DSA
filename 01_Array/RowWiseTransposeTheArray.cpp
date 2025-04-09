#include<iostream>
using namespace std;

void transpose(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=i; j<col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void printArray(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main () {
    int arr [4][4] = {{1,2,3,4},
                      {11,22,33,44},
                      {12,23,34,45},
                      {13,24,35,46}};
    int row = 4; 
    int col = 4;

    cout << "Print Before Transpose" << endl;
    printArray(arr, row, col);
    cout << endl << "Doing Transpose" << endl;
    transpose(arr, row, col);
    cout << "Print Before Transpose" << endl;
    printArray(arr, row, col);

    return 0;
}