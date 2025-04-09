#include<iostream>

using namespace std;

class Student {
    public:
    
    // Class properties
    int id;
    int age;
    int rollNo;
    bool present; 
    string clsName;

   // Create a constructor
    Student (int id, int age, int rollNo, bool present, string clsName) {

        this->id = id;
        this->age = age;
        this->rollNo = rollNo;
        this->present = present;
        this->clsName = clsName;
    }

    void study() {
        cout << "Studing" << endl;
    }
};

int main () {
    Student s1(1, 23, 1001, 1, "five");
    cout << s1.clsName << endl;
    cout << s1.age << endl;
    cout << s1.present << endl;


    return 0;
}