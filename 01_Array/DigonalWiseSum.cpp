#include<iostream>
using namespace std;

void digonalWiseSum(int arr[][4], int row, int col, int add) {
    int sum = 0;
    for(int i=0; i<row; i++) {
        sum = sum + arr[i][i];
        cout << "Digonal sum is :-- " << i << ". " << sum << " " << endl;
        add = add + sum;
    }
    cout << "Addition is :- " << add;
}
int main () {
    int arr [4][4] = {{1,2,3,4},
                      {11,22,33,44},
                      {12,23,34,45},
                      {13,24,35,46}};
    int row = 4; 
    int col = 4;
    int add = 0;

    digonalWiseSum(arr, row, col, add);
}