#include<iostream>
using namespace std;

void colWiseSum(int arr[][3], int row, int col, int add) {
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum = sum + arr[j][i];
        }
        cout << "Sum of perticular coloum :-- " << i << ". "<< sum << " " << endl;
        add = add + sum;
    }
    cout << "Addition of coloum :-- " << add;
}
int main () {
    int arr[][3] = {{1,2,3},
    {4,5,6},
    {7,8,9}};
    int row = 3;
    int col = 3;
    int add = 0;

    colWiseSum(arr,row, col, add);

}