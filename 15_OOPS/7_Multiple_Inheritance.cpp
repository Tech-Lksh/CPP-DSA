//Multiple Inheritance
#include <iostream>

using namespace std;

class Teacher {
    public:
    void teach() {
        cout << "Teacher is Teaching..." << endl;
    }
};

class Researcher {
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
    p.reserch();
    p.teach();

    return 0;
}