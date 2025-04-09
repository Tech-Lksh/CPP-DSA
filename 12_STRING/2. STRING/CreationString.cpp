#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Helper function for case insensitive comparison
bool caseInsensitiveCompare(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) return false;
    for (size_t i = 0; i < str1.length(); i++) {
        if (tolower(str1[i]) != tolower(str2[i])) return false;
    }
    return true;
}

int main() {
    // ... existing code ...
    
    // 9. String comparison
    string str4 = "Hello";
    string str5 = "hello";
    cout << "\nString Comparison:" << endl;
    cout << "str4 == str5: " << (str4 == str5 ? "True" : "False") << endl;
    cout << "Case insensitive comparison: " 
         << (caseInsensitiveCompare(str4, str5) ? "True" : "False") << endl;
    
    // ... existing code ...