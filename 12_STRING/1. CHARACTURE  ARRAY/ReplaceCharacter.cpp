#include<iostream>
#include<string.h>
using namespace std;

void replaceCharacters(char ch[], int n) {
    int index = 0;

    while(ch[index] != '\0') {
        char currentindex = ch[index];

        if(currentindex == '@') {
            ch[index] = ' ';
        }
        index++;
    }
}


int main() {
    char ch[100];

    cin.getline(ch, 100);

    cout << "Before :-- " << ch << endl;
    replaceCharacters(ch, 100);
    cout << "After :-- " << ch << endl;
}