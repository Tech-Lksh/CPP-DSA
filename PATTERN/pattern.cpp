#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    // 1. PIRAMID PATTERN

    // int n;
    // cout<<"Enter your value :-- ";
    // cin>>n;

    // for(int row = 0; row<n; row++)
    // {
    //     for(int col = 0; col<n-row-1; col++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int col = 0; col<row+1; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 2. INVERTE TRIANGLE

    // int n;
    // cout<<"Enter your value :--";
    // cin>>n;

    // for(int row = 0; row<n; row++)
    // {
    //     for(int col = 0; col<n-row; col++)
    //     {
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // 3. HOLLOW SQUARE BOX

    // int n = 5;

    // for(int row = 0; row<n; row++)
    // {
    //     for(int col = 0; col<n; col++)
    //     {
    //         if(row == 0 || row == 4)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         { 
    //             if(col == 0 || col == 4)
    //             {
    //             cout<<"*";
    //             }
    //             else 
    //             {
    //             cout<<" ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

    // 4. INVERTED HOLLOW TRIANGLE

    // int n = 5;

    // for(int row = 0; row<n; row++)
    // {
    //     for(int col = 0; col<n; col++)
    //     {
    //         if(row == 0 || col == 0 || col == n-row-1)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // 5. NUMARIC TRIANGLE 

    // int n = 5;

    // for(int row = 0; row<n; row++)
    // {
    //     for(int col = 0; col<row+1; col++)
    //     {
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // 6. NUMERIC HOLLOW TRIANGLE
    
    // int n = 5;

    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<row+1; col++)
    //     {
    //         if(col == 0 || row == 4 || col == row)
    //         {
    //             cout<<col+1;
    //         }
    //         else 
    //         {
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // int a = 64;
    // cout<<setbase(8)<<a;
    // cout<<setbase(16)<<a;

    // cout<<a;

    // return 0;

    // int n = 5;

    // for(int row = 0; row<n; row++)
    // {
    //     for(int col = 0; col<row+1; col++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }


//     int i = 0, j = i++, k = --i;
// if(i > 0)
//     j++;
// else
//     k++;
// if(k == 0)
//     i++;
// else if(k > 0)
//     k--;
// else
//     k++;
// cout << i * j * k;

// int i = 1, j = i++, k = --i;
// if(i > 0) {
//     j++;
//     k++;
// }
// else {
//     k++;
//     i++;
// }
// if(k == 0) {
//     i++;
//     j++;
// }
// else {
//     if(k > 0)
//         k--;
//     else
//         k++;
//     i++;
// }
// cout << i * j * k;



// double big = 1e15;
// double small = 1e-15;

// cout << fixed << big + small;

// bool yes = !false;
// bool no = !yes;
// if(!no)
// cout << “true”;
// else;
// cout << “false” ;
// nbsp;


// #include <iostream>
// using namespace std;
// int main() {
        // int i = 5, j = 0;
        // while(i > 0) {
        //     i--;
        //     j++;
        // }
        // cout << j;
        // return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//         int i = 3, j = 0;
//         do {
//             i--;
//             j++;
//         } while(i >= 0);
//         cout << j;
//         return 0;
// // }

// #include <iostream>
// using namespace std;
// int main() {
        // float val = 100.0;
        // do {
        //     val = val / 5;
        //     cout << "*";
        // } while(val > 1.0);
        // return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
        // for(float val = -10.0; val < 100.0; val = -val * 2)
        //     cout << "*";
        // return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
        // for(float val = -10.0; val < 100.0; val = -val * 2) {
        //     if(val < 0 && -val >= 40)
        //         break;
        //     cout << "*";
        // }
        // return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
        // int a = 1, b = 2;
        // int c = a | b;
        // int d = c & a;
        // int e = d ^ 0;
        // cout << e << d << c;
        // return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
        // int a = 1, b = 2;
        // int c = a << b;
        // int d = 1 << c;
        // int e = d >> d;
        // cout << e;
        // return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
        int a = 2;
        switch(a << a) {
        case 8 : a++;
        case 4 : a++;
        case 2 : break;
        case 1 : a--;
        }
        cout << a;
        return 0;
// }


}
