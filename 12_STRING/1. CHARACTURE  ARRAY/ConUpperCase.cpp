#include<iostream>
#include<string.h>

using namespace std;

// void convertUpperCase(char ch[], int n) {
//     // ek index liya hai jo zero se start ho raha hai
//     int index = 0;
    
    
//     while(ch[index] != '\0') {
//         // temp variable liya jo ch[index] kii current value store kr rha hai 
//         char currentIndex = ch[index];
//         // check karo Lovercase, then convert to Uppercase
//         if(currentIndex >= 'a' && currentIndex <= 'z') {
//             ch[index] = currentIndex - 'a' + 'A';
//         }
//         index++;
//     }
// }

// int main () {
//     char ch[100];

//     cin.getline(ch, 100);

//     cout << "before " << ch << endl;
//     convertUpperCase(ch, 100);
//     cout << "Upper case " << ch << endl;
// }



void convertUpperCase(char ch[], int n) {
    // ek index liya hai jo zero se start ho raha hai
    int index = 0;
    
    
    while(ch[index] != '\0') {;
        // check karo Lovercase, then convert to Uppercase
        if(ch[index] >= 'a' && ch[index] <= 'z') {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main () {
    char ch[100];

    cin.getline(ch, 100);

    cout << "before " << ch << endl;
    convertUpperCase(ch, 100);
    cout << "Upper case " << ch << endl;
}