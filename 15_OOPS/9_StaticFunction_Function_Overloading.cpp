#include <iostream>

using namespace std;


// FUNCTION OVERLOADING 

// int add(int a, int b) {
//     return a + b;
// }

// double add(double a, double b, double c) {
//     return a + b + c;
// }

// int add(int a, int b, int c, int d) {
//     return a - b - c - d;
// }


// int main () {
//     cout << add(2, 2) << endl;
//     cout << add(2, 3, 4) << endl;
//     cout << add(2,7,4,9) << endl;
// }



// OPERATOR OVERLOADING 
    
class Vector {
    int x, y; 
    public:

    // Fisrt way to initialisation parametrise constructor
    // Vector(int x, int y) {
    //     this->x = x;
    //     this->y = y;
    // }

    // Use init List
    // second way to initilisation parametrise constructor
    Vector(int x, int y) : x(x), y(y) {}

    // addition krne ke liye use kr rhe hai 
    // operator overloading
    void  operator+(const Vector&src) {
        // this would point to v1
        //src would be ref to v2
        // this->x = this->x + src.x;
        // this->y = this->y + src.y;

        this->x += src.x;
        this->y += src.y;
    }

    void display() {
        cout << "X:" << x << " "
        << "Y:" << y << endl;
    }
     
};

int main() {
    Vector v1(2, 3);
    Vector v2(4, 5);

    // Addition both vector
    v1 + v2; // addition ans should be store in v1
    v1.display();
    return 0;
}