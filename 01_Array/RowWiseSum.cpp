#include<iostream>
using namespace std;

void rowWiseSum(int arr[][4], int row, int col, int add) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum = sum + arr[i][j];
        }
        cout << "Sum of perticular row :-- " << i << ". " << sum << endl;
        add = add + sum;
    }

    cout << "Addidion is :-- " << add ;
}
int main () {
    int arr[3][4] = {{10,20,30,40},
                     {12,23,34,45},
                     {122,233,344,455}};
    int row = 3;
    int col = 4;
    int add = 0;

    rowWiseSum(arr, row, col, add);       
}