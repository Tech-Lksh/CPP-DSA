// #include<iostream>
// #include<stack>

// using namespace std;

// class Stack {
//     public:
//     int *arr; // dinamic array create kiya hai using pointer
//     int size; // size bata rha 
//     int top;  // ye top kii value point kar rha kaha par hai but starting me top kii value -1 liye hai 

//     // Constructor Call
//     Stack(int size) {
//         arr = new int[size];
//         this->size = size;
//         this->top = -1;
//     }
    
//     //Enter the data using Push Function
//     void push(int data) {
//         if(top == size - 1) {
//             cout << "Stack is overflow" << endl;
//             return;
//         }
//         else {
//             top++;
//             arr[top] = data;
//         }
//     }
    

//     // Remove the data using pop Function
//     void pop() {
//         if(top == -1) {
//             cout << "Stack is underflow" << endl;
//             return;
//         }
//         else {
//             top--;
//         }
//     }
    

//     // Check kar rhe hai data empty hai ya empty nhi hai 
//     bool isEmpty() {
//         if(top == -1) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }


//     // check kar rhe hai top stack ke konse index pe hai
//     int getTop() {
//         if(top == -1) {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//         else {
//             return arr[top];
//         }
//     }

      
//     // ye size bata raha stack ka 
//     int getSize() {
//         return top+1;
//     }


//     void print() {
//         cout << "Size of stack :- " << getSize() << endl;
//         cout << "Index Value of Top :- " << top << endl;
//         cout << "Top element :- " << getTop() << endl;
//         cout << "Hole stack :- ";
//         for(int i=0; i<getSize(); i++) {
//             cout << arr[i] << " ";
//         } cout << endl << endl;
//     }
// };


// int main() {

//     // Creation 

//     Stack st(8);
    
//     // yaha Element  push ho rhe hai stack me 
//     st.push(10);
//     st.print();
//     st.push(20);
//     st.print();
//     st.push(30);
//     st.print();
//     st.push(40);
//     st.print();
//     st.push(50);
//     st.print();
//     st.push(60);
//     st.print();
//     st.push(70);
//     st.print();
//     st.push(80);
//     st.print();


//     st.pop();
//     st.print();

//     return 0;
// }


#include<iostream>
#include<stack>

using namespace std;

class Stack {
    public:

    int *arr;
    int size;
    int top;

    Stack(int size) {
        arr = new int[size];
        this-> size = size;
        this-> top = -1;
    }

    void push(int data) {
        if(top == size - 1) {
            cout << "Stack is overflow" << endl;
            return;
        }
        else {
            top++;
            arr[top] = data;
        }
    }

    void pop() {
        if(top == -1) {
            cout << "Stack is underflow" << endl;
            return;
        }
        else {
            top--;
        }
    }


    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    int getTop() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else {
            return arr[top];
        }
    }

    int getSize() {
        return top+1;
    }

    void print() {
        cout << "Size of Stack :- " << getSize() << endl;
        cout << "Index Value of Top :- " << top << endl;
        cout << "Top data :- " << getTop() << endl;
        cout << "Hole value of stack :- " << endl;
        for(int i=0; i<getSize(); i++) {
            cout << arr[i] << " ";
        } cout << endl << endl;
    }
};


int main() {

    // Creation 

    Stack st(8);
    
    // yaha Element  push ho rhe hai stack me 
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();
    st.push(40);
    st.print();
    st.push(50);
    st.print();
    st.push(60);
    st.print();
    st.push(70);
    st.print();
    st.push(80);
    st.print();


    st.pop();
    st.print();

    return 0;
}