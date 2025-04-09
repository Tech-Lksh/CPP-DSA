#include<iostream>
using namespace std;

// int main ()
// {
//     int n = 4;
//     for(int row = 0; row < 5; row++)
//     {
//         for (int col = 0; col < n*2 - row - 2; col++)
//         {
//             cout<<"* ";
//         }
//         for(int col = 0; col < row + 1; col++)
//         {
//             if (col == row)
//             {
//                 cout<<row + 1;
//             }
//             else
//             {
//                 cout<<row + 1<<" * ";
//             }
//         }
//         for (int col = 0; col < n*2 - row - 2; col++)
//         {
//             cout<<" *";
//         }
//         cout<<endl;
//     }

// }

// int main ()
// {
//    int n = 5;
    
//         for (int row = 0; row < n; row++)
//         {
//             for (int col = 0; col < n - row; col++)
//             {
//                 cout<<" ";
//             }
//             for (int col = 0; col < row * 2 + 1; col++)
//             {
//                 cout<<row + 1;
//             }
//             cout<<endl;
//         }
    



    // for (int row = 0; row < 4; row++)
    // {  
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         if (col == row)
    //         {
    //             cout<<row + 1;
    //         }
    //         else 
    //         {
    //             cout<<row + 1 << "*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for (int row = 0; row < 4; row++)
    
    // {
    //     for (int col = 0; col < 3 - row; col++)
    //     {
    //         if (col % 2 == 1)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<3 - row;
    //         }
    //     }
    //     cout<<endl;
    // }
   

  
  

// NUMBER STAR PATTERN 

// int main ()
// {
//     int num = 4;
//     for (int row = 0; row < 4; row++)
//     {
//         for (int col = 0; col < 2*row + 1; col++)
//         {
//             if(col%2== 1)
//             {
//                 cout<<" * ";
//             }
//             else
//             {
//                 cout<<row+1;
//             }
//         }
//         cout<<endl;
//     }
// }


// TOP & DOWN HOLLOW INVERTED PYRIMID
// int main ()
// {
//     int num = 4;

//     for (int row = 0; row < num; row++)
//     {
//         // inverted pyrimid 1
//         for(int col = 0; col < num - row; col++)
//         {
//             cout<<"*";
//         }
//         // full pyrimid 1
//         for (int col = 0; col < 2 * row + 1; col++)
//         {
//             cout<<" ";
//         }
//         // inverted pyrimid 1
//         for (int col = 0; col < num - row; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for (int row = 0; row < num; row++)
//     {
//         // inverted pyrimid 1
//         for(int col = 0; col < row + 1; col++)
//         {
//             cout<<"*";
//         }
//         // full pyrimid 1
//         for (int col = 0; col < 2*num - 2*row - 1; col++)
//         {
//             cout<<" ";
//         }
//         // inverted pyrimid 1
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }


// HOLLOW PYRIMID & HOLLOW INVERTED PYRIMID

// int main ()
// {
//     int n = 6;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout<<" ";
//         }
//         for (int col = 0; col < row * 2 + 1; col++ )
//         {
//         if (col == 0 || col == row * 2)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<" ";
//         }
//         }
//         cout<<endl;
//     }
//     for (int row = 0; row < 7; row++)
//     {
//         for (int col = 0; col < row; col++)
//         {
//             cout<<" ";
//         }
//         for (int col = 0; col < n - row; col++)
//         {
//             if (col == 0 || col == n - row -1)
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


// // INVERTED HOLLOW PYRIMID 

// int main ()
// {
//     int n = 7;
//     for (int row = 0; row < 7; row++)
//     {
//         for (int col = 0; col < row; col++)
//         {
//             cout<<" ";
//         }
//         for (int col = 0; col < n - row; col++)
//         {
//             if (col == 0 || col == n - row -1)
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





// HOLLOW PYRIMID PATTERN

// int main ()
// {
//     int n = 6;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout<<" ";
//         }
//         for (int col = 0; col < row * 2 + 1; col++ )
//         {
//         if (col == 0 || col == row * 2)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<" ";
//         }
//         }
//         cout<<endl;
//     }
// }


// // TOP & DOWN PYRIMID

// int main ()
// {
//     int n = 4;

//     //  int n = 5;

//     for (int row = 0; row < n; row++)
//     {
        
        
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout <<"  ";
//         }

//         for (int col = 0; col < row * 2 + 1; col++)
//         {
//             cout<<"* ";
//         }
        
//         cout<<endl;
//     }

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n + row - 4 ; col++)
//         {
//             cout<<"  ";
//         }
//         for (int col = 0; col < 7 - row * 2; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// int main()
// {
//     int n = 6;
   
//    for (int row = 0; row < n; row++)
//    {
//     for (int col = 0; col < n - row; col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//    }
// }



int main()
{
    int n = 4;

    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            if (col == 0 || col == 3)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            
        }
    }
    
}