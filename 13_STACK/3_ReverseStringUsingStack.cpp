#include<iostream>
#include<stack>

using namespace std;

// int main () {
//     string str = "LkshJee";
//     stack<char> st;

//     for(int i=0; i<str.length(); i++) {
//         char ch = str[i]; // string kii value char ke new variable me store kr rhe 
//         st.push(ch); // char ko puch ke rhe stack me 
//     }

//     cout << endl;
//     while(!st.empty()) {
//         cout << st.top(); // top ko print karwa rhe 
//         st.pop(); // stack ke value remove kr rhe 
//     }cout << endl;
}


// output
// eeJhskL





// Queue implementation using array

class Queue {
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue (int size) {
        arr = new int[size];
        this-> size = size;
        this-> front = -1;
        this-> rear = -1;
    }


    void push(int data) {
        if(rear == size - 1) {
            cout << "Queue is overflow" << endl;
            return;
        }
        else if(front == -1 && rear == -1) {
            front++;
            rear++;
            arr[rear] = data;
        }
        else {
            rear++;
            arr[rear] = data;
        }
    }

    void pop() {
        if(front == -1 && rear == -1) {
            cout << "Queue is Underflow" << endl;
            return;
        }
        if(front == size-1)
    }
};

