#include<iostream>
using namespace std;


int main () {
    int num = 5;
    int *ptr = &num;

    cout << "Value of num :- " << num << endl;
    //
    cout << "Addres of num :-- " << &num << endl;
    //
    cout << "Value of ptr :-- " << *ptr << endl;
    //
    cout << "Addres of ptr : -- " << &ptr << endl;
    // 
    cout << "Addres of ptr :  " << ptr << endl;
}