// // USING INDIXING TO ACCES THE ADDRES OF THE ARRAY

// #include<iostream>
// using namespace std;

// int main ()
// {
//     int arr [5] = {5,3,7,1,4};


// // Acces the addres of Array with using indexing
//     cout<<arr[0] << endl;
//     cout<<arr[3]<< endl;
//     cout<<arr[2]<<endl;
    
//     return 0;
// } 



#include<iostream>
using namespace std;

int main () {
    int arr[9] = {2,3,4,5,6,100,400,5000,5777};
    int n = 9;
    int temp = 0;

    for(int i=0; i<n; i++) {
        temp = temp + arr[i];
    }
    
        
    cout << "temp is :-- " << temp << endl; 
    return 0;
}