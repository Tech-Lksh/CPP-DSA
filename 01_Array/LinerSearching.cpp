#include<iostream>
using namespace std;

// Writye down a function 

bool searchTaaget(int arr[][4], int row, int col, int target) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] == target) {
                // Target Found Return true
                return true;
            }
        }
    }
    // Target not found Return false
    return false;
}

int main () {
    int arr[3][4] {{10,20,30,40},
                   {100,200,300,400},
                   {1000,2000,3000,4000}};
    int row = 3;
    int col = 4;
    int target;
    cout << "Enter Target :-- ";
    cin >> target;

    cout << "Found or Not : --" << searchTaaget(arr, row, col, target) << endl;
    return 0;
}