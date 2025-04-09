#include<iostream>
using namespace std;
// int main () {
//     int n= 5; 
//     int&k = n;
//     int&c = n;
//     int&t = n;

//     cout << "N is :-- " << n << endl; 
//     cout << "N is :-- " << k << endl; 
//     cout << "N is :-- " << c << endl; 
//     cout << "N is :-- " << t << endl; 
//     return 0;
// }

// Initilazation Function 
void functionCallByReference (int n) {
    int&k = n; // k is reference name 
    int&c = n; // c is reference name 
    int&t = n; // t is reference name 
    int&r = n; // r is reference name 

    cout << "N is :--" << n << endl;
    cout << "k is :--" << k << endl;
    cout << "t is :--" << t << endl;
    cout << "c is :--" << c << endl;
    cout << "r is :--" << r << endl;
}

// Calling Function in int main
int main () {
    int n = 5; // orignal name is n

    functionCallByReference (n);
}


// 1. method Function increment by user, function call by value and by reference 

// int incrementBy1 (int n) {
//     n++;
//     return n;
// }

// int main () {
//     int n ;
//     cout << "Enter the value of n : ";
//     cin >> n;

//     n = incrementBy1(n);
//     cout << "N is  :-- " << n << endl;

//     return 0;

// }


// 2. Method Function increment by user , Function call by value by refrence

// void incrementBy1 (int&n) {
//     n++;
// }

// int main () {
//     int n;
//     cout << "Enter the value of n :-- ";
//     cin >> n; 

//     incrementBy1 (n);
//     cout << "N is :-- " << n << endl;

// }


