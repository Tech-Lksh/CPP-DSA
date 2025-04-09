#include<iostream>
using namespace std;

/* Creation of Array Using Function
   Always Coloum Mention on Array 
   because the formula of finding the position on arry = c * Row + Col

*/

// void creatArray (int arr[][5], int row, int col) {
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     } 
// }
// int main () {
//     int arr[2][5] = {{1,2,3,4,5},
//                      {2,3,4,5,6}};
//     int row = 2;
//     int col = 5;
//     creatArray(arr, row, col);

//     return 0;
// }



int findtrgt(int arr[][5], int row, int col, int target) {
    // int s =0;
    // int e = n-1;
    // int mid = s+(e-s)/2;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] == target) {
                
        cout << target;
            }
        }
    }
}
int main() {
    int arr[5][5] = {{1,4,7,11,15},
                     {2,5,8,12,19},
                     {3,6,9,16,22},
                     {10,13,14,17,24},
                     {18,21,23,26,30}};
    int row = 5;
    int col = 5;
    int target = 5;
    findtrgt(arr, row, col, target);
}