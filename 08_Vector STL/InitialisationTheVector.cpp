#include<iostream>
#include<vector>
#include<array>
using namespace std;

// void print (vector<int> arr) {
//     int size = arr.size();
//     for (int i=0; i<size; i++) {
//         cout << arr[i] << endl;
//     }
// }

int main () {
    vector<int> arr;

    // Insert
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    
    // print(arr);

    while(1) {
        int d; cin>>d;
        arr.push_back(d);
        cout << "Capacity: " << arr.capacity() << " Size: " << arr.size() << endl;
    }
} 