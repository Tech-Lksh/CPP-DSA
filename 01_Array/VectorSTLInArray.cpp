#include<iostream>
#include<vector>
using namespace std;

/* 1. This is a Static Array implement -- 
int arr[5]; 

2.This is a Dynamic Array Implement -- 
int n;
cin >> n;

Tarika for dynamic Array -- 
int*arr = new int[n];
*/

// Code for dynamic Array
void fun (int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << ",";
    }
}
int main () {
    int arr[5] = {1,2,3,4,5,};
    int size = 5;

    fun(arr, size);

}