#include <iostream>

using namespace std;

// Base class / parent cls
class Bird
{
public:
    int age;
    int leg;
    int weight;
    string color;

    void eat() {
        cout << "Bird is Eating" << endl;
    }

    void fly() {
        cout << "Bird is flying" << endl;
    }
};


// child cls
// inherit hai base clss se 
class Sparrow : public Bird { 
    public:
    
    // create constructor 
    Sparrow(int age, int leg, int weight, string color) {
        this->age=age;
        this->leg=leg;
        this->weight=weight;
        this->color=color;
    }
    void grassing() {
        cout << "Sparrow is grassing" << endl;
    }
};


// chils cls
// inherit hai base clss se 
class Piggon : public Bird { 
    public:

    // create constructor
    Piggon(int age, int leg, int weight, string color) {
        this->age=age;
        this->leg=leg;
        this->weight=weight;
        this->color=color;
    }
    void guttring() {
        cout << "Piggon is guttring" << endl;
    }
};

int main()
{
    Sparrow s(1, 2, 20, "Brown");
    cout << s.color << endl;
    s.grassing();  

    Piggon p(100, 4, 30, "black");
    p.guttring();
    p.eat();
    p.fly();
    return 0;
}