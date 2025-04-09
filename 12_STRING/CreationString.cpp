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
    // 1. Different ways to create strings
    string str1 = "Hello";                    // Using string literal
    string str2("World");                     // Using constructor
    string str3(5, '*');                      // String with repeated characters
    
    // 2. String concatenation
    string result = str1 + " " + str2;        // Using + operator
    cout << "Concatenated string: " << result << endl;
    
    // 3. String functions
    cout << "\nString Functions:" << endl;
    cout << "Length: " << result.length() << endl;
    cout << "Size: " << result.size() << endl;
    cout << "Is empty? " << (result.empty() ? "Yes" : "No") << endl;
    
    // 4. Accessing characters
    cout << "\nAccessing characters:" << endl;
    cout << "First character: " << result[0] << endl;
    cout << "Last character: " << result.back() << endl;
    
    // 5. Substring operations
    string substr = result.substr(0, 5);      // Get "Hello"
    cout << "\nSubstring (0,5): " << substr << endl;
    
    // 6. Finding in string
    size_t pos = result.find("World");
    if (pos != string::npos) {
        cout << "Found 'World' at position: " << pos << endl;
    }
    
    // 7. Modifying strings
    string modifiable = "Hello World";
    modifiable.replace(0, 5, "Hi");           // Replace "Hello" with "Hi"
    cout << "\nAfter replace: " << modifiable << endl;
    
    // 8. Case conversion
    string lowercase = "HELLO";
    transform(lowercase.begin(), lowercase.end(), lowercase.begin(), ::tolower);
    cout << "Lowercase: " << lowercase << endl;
    
    // 9. String comparison
    string str4 = "Hello";
    string str5 = "hello";
    cout << "\nString Comparison:" << endl;
    cout << "str4 == str5: " << (str4 == str5 ? "True" : "False") << endl;
    cout << "Case insensitive comparison: " 
         << (caseInsensitiveCompare(str4, str5) ? "True" : "False") << endl;
    
    // 10. Inserting and erasing
    string text = "Hello";
    text.insert(5, " there");                 // Insert at position
    cout << "\nAfter insert: " << text << endl;
    text.erase(5, 6);                         // Erase 6 characters starting from position 5
    cout << "After erase: " << text << endl;
    
    return 0;
} 