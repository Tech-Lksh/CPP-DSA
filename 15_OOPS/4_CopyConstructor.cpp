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
    Student (const Student&srcobj) {

        this->id = srcobj.id;
        this->age = srcobj.age;
        this->rollNo = srcobj.rollNo;
        this->present = srcobj.present;
        this->clsName = srcobj.clsName;
    }

    void study() {
        cout << "Studing" << endl;
    }
};


int main() {
    Student s1(1, 12, 1, 0. "five");

    Student s2(s1);
    s2.id();
}