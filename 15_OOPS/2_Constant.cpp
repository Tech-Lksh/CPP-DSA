#include <iostream>
using namespace std;

class abc
{
    int x;
    int *y;

public:
    abc()
    {
        x = 0;
        y = new int(0);
    }

    int getX() {
        return x;
    }

    void setX(int val) {
        x = val;
    }

    int getY() {
        return *y;
    }

    void setY(int val) {
        *y = val;
    }
};

int main() {
    abc a;
    cout << a.getX() << endl;
    cout << a.getY() << endl;
    return 0;
}

// Const int x = 5; // x is constant
// initialization  can be done
// but we cant re-assign a value
// x = 10;
// cout << x << endl;

// 2. const with pointers
//  const int *a = new int; // const data bana diya or non-const ko pointer kr raha
//  *a = 2;
//  cout << *a << endl;
//  int b = 5;
//  a = &b;
//  cout << *a << endl;

//  return 0;