// #include <iostream>
// using namespace std;

// int main () {

//     // Initilizationn nof pointer
//     // int a = 5;
//     // int *ptr = &a;

//     // cout << "Addres of a :-- " << ptr << endl;
//     // cout << "Value of a :-- " << *ptr << endl;
//     // cout << "Addre of ptr :-- " << &ptr << endl;


//     // Cheack Pointer size

//     // Check integer Size
//     int b = 5;
//     int *ptr = &b;
//     cout << "Check Pointer Size : -- " << sizeof(ptr) << endl;

//     // Check character Size
//     char ch = 'k';
//     char *cptr = &ch;
//     cout << "Check Pointer Size : -- " << sizeof(cptr) << endl;

//     // Check long Size
//     long lp = 10;
//     long *lptr = &lp;
//     cout << "Check Pointer Size : -- " << sizeof(lptr) << endl;
// }



#include<iostream>

using namespace std;

class Student {
    public:

    int id;
    int age;
    int rollNo;
    bool prestent;
    string section;
    string cls;
  
    // Create a Constructor
    Student() {

    }

    Student(int id, int age, int rollNo, int present, string section, string cls) {

        id = id;
        age = age;
        rollNo = rollNo;
        present = present;
        section = section;
        cls = cls;
    }


};


int main () {
    Student s1;

    Student s2(1, 23, 02, 0, "A", "Five");
    cout << s2.cls << endl;
}