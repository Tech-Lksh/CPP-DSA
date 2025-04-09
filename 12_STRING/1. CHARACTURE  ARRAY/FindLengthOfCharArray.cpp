#include<iostream>
using namespace std;

int findLength(char  ch[], int size) {
    // Create a count variable
    int length = 0;
    for(int i=0; i<size; i++) {
        if(ch[i] == '\0') {
            // Ruk jana hai
            break;
        }
        // Second Condition Me Length Ko Aage Badho
        // Just Like Count Ko Jaise Badhate the Waise Same
        else {
            length++;
        }
    }
    return length;
}

int main() {
    char ch[100];
    int size = 100;

    // Input Term
    cout << "Enter the Character :- " << ch;
    cin.getline(ch, 100);
    
    // Create a tempea ry variable to printing the Length of Character String
    int len = findLength(ch, 100);
    
    // Print the Length
    cout << "Length of String is :- " << len << endl; 
}