#include<iostream>
#include<stack>

using namespace std;

int main () {
    
    //Creation
    stack<int> st;

    // Insertion
    st.push(10);
    st.push(20);
    st.push(30);

    // Check Size
    cout << "Size of stack is :- " << st.size() << endl;

    //Remove
    st.pop();
    

    //Empty
    if(st.empty()) {
        cout << "Stack is empty" << endl;
    } 
    else {
        cout << "Stack is not empty" << endl;
    }

    //Chect top Element in Stack
    cout << "Top element of stack :- " << st.top() << endl;

}


