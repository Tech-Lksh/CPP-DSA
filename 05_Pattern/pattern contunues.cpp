#include<iostream>
using namespace std;

int main ()
{
    int n = 5;
    for(int row = 0; row < 5; row++)
    {
        for (int col = 0; col < n*2 - row - 2; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}



// int main ()
// {
//     for (int row = 0; row < 4; row++)
//     {
//         for (int col = 0; col < 4 + row - 4; col++)
//         {
//             cout<<"  ";
//         }
//         for (int col = 0; col < row * -7; col++)
//         {
//             cout<<"* ";
//         }
//     }
// }



// ful pyrimid code :----- 

// int main ()
// {
//     int n = 5;

//     for (int row = 0; row < 5; row++)
//     {
        
        
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout <<" ";
//         }

//         for (int col = 0; col < row * 2 + 1; col++)
//         {
//             cout<<"* ";
//         }
        
//         cout<<endl;
//     }
// }







// int main ()
// {
//     for (int row = 0; row < 5; row++)
//     {
//         for (int col = 0; col < 5; col++)
//         { 
//             if (row == 0 || col == 0)  
//             { 
//                 cout<<"* ";
//                 col = 5 - 1 - row;
//             }
//             else 
//             { 
//                 cout<<"  ";
//             }
           
//         }
//         cout<<endl;
//     }
// }





// HOLLOW SQUARE PATTERN

// int main ()
// {
//     for (int row = 0; row < 5; row++)
//     {
//         for (int col = 0; col < 5; col++)
//         {
//             if (row == 0 || row == 4)
//             {
//                 cout<<"* ";
//             }
//             else if (col == 0 || col == 4)
//             {
//                 cout<<"* ";
//             }
//             else 
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }













    // int main ()
    // {
    //     for(int row = 0; row < 6; row++)
    //     {
    //         int k = 0;
    //         for(int col = 0; col < 11; col++)
    //         {
    //             if (col < 6 - row - 1)
    //             {
    //                 cout<<" ";
    //             }
    //             else if (k < 2 * row + 1)
    //             {
    //                 if (k == 0 || k == 2 * row || row == 6 - 1)
                    
    //                     cout<<"*";
                    
    //                 else
                    
    //                     cout<<" ";
    //                     k++;
                    
    //             }
    //             else 
    //             { 
    //                 cout<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    // }
