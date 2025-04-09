#include<iostream>
using namespace std;


class Bird {
    public:

    string name;
    string color;
    int leg;
    int eye;

    void fly() {
        cout << "Bird is flying..." << endl;
    }

    void eat() {
        cout << "Bird is eating..." << endl;
    }

    void run() {
        cout << "Bird is runing..." << endl;
    }

};


class Sparrow : public Bird {
    public:

    Sparrow(string name, string color, int leg, int eye) {

        this->name = name;
        this->color = color;
        this->leg = leg;
        this->eye = eye;
    }

    void grass() {
        cout << "Sparrow is grassing..." << endl;
    }
};


int main() {
    Sparrow s("Bird", "Brown", 2, 2);
    cout << s.color << endl << endl;
    cout << s.name << endl << endl;
    cout << s.leg << endl << endl;
    cout << s.eye << endl << endl;

    s.eat();
    cout << endl;
    s.fly();
    cout << endl;
    s.run();
    cout << endl;
    s.grass();
}