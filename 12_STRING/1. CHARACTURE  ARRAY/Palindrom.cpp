#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[], int n) {
    // n-> length of string
    int i = 0;
    int j = n-1;

    while(i <= j) {
        if(ch[i] == ch[j]) {
            i++;
            j--;
        }
        else  {
            // character not match 
            return false;
        }

    }
    // agar yaha pouch gye ho 
    // iska mathal sare character match ho gye hai
    // iska matal palindron hai
    return true;
}


int main() {
    char ch[100];
    
    cin.getline(ch,100);
    int len = strlen(ch);

    bool isPalindrome = checkPalindrome(ch, len);
    if(isPalindrome) {
        cout << "Valid Palindrom" << endl;
    }
    else {
        cout << "Invalid Palindron" << endl;
    }
}