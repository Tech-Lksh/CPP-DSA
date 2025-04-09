//Multiple Inheritance
#include <iostream>

using namespace std;

class Person {
    public:
    void walk() {
        cout << "Person is walking..." << endl;
    }
};

class Teacher : virtual public Person {
    public:
    void teach() {
        cout << "Teacher is Teaching..." << endl;
    }
};

class Researcher : virtual public Person {
    public:
    void reserch() {
        cout << "Researcher is Researching..." << endl;
    }
};

// Multiple Inheritance 
class Professor : public Teacher, public Researcher {
    public:
    void bore() {
        cout << "Professor is Boring..." << endl;
    }
};

int main() {
    Professor p;
    p.bore();
    cout << endl;
    p.reserch(); 
    cout << endl;
    p.teach();
    cout << endl;
    //Diamond Problem  
    // Solution 1: Scope Resulation
    p.Teacher::walk();
    cout << endl;
    p.Researcher::walk(); 
    cout << endl;


    // solution 2 : virtual
    p.walk();

    return 0;
}