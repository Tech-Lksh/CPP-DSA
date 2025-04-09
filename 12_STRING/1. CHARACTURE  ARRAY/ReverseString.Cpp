#include<iostream>
#include<string.h>
using namespace std;

void reverse(char ch[], int n) {
    int i = 0;
    int j = n-1;

    while(i<=j) { 
        swap(ch[i], ch[j]);
    }
    cout << "reverse is :--" << ch << endl;
}

int main () {
    char ch[6];

    cin.getline(ch, 6);
    cout << "length is :-- " << strlen(ch) << endl;
    reverse(ch, 6);
    
    
}

