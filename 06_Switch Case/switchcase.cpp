#include<iostream>
using namespace std;

int main()
{
    // CALCULATOR  CODE 


    float a, b;
    cout<<"Enter the two number"<<endl;
    cin>>a>>b;

    int op; 
    cout<<"What operation you want to do?"<<endl;
    cin>>op;

    float ans = 0;
    // op 0 -> add, 1 -> sub, 2 -> mult, 3 -> div, invalid operation
    if (op == 0)
    {
        ans = a + b;
    }
    else if (op == 1)
    {
        ans = a - b;
    }
    else if (op == 2)
    {
        ans = a * b;
    }
    else if (op == 3)
    {
        ans = a / b;
    }
    else
    {
        cout<<"invalid operation"<<endl;
        return 0;
    }
    cout<<"your answer"<<ans<<endl;
    return 0;
    

}

// USING SWITCH CASE TO MAKE CALCULATOR
// int main()
// {
//     float a, b;
//     cout<<"Select a"<<endl;
//     cin>>a;
//     cout<<"Select b"<<endl;
//     cin>>b;

//     int op;
//     cout<<"Choose your operation"<<endl;
//     cin>>op;

//     float ans = 0;

//     switch (op)
//     {
//         case 1:
//         cout<<"Add case"<<endl;
//         ans = a + b;
//         break;
//         case 2:
//         cout<<"Add case"<<endl;
//         ans = a - b;
//         break;
//         case 3:
//         cout<<"Add case"<<endl;
//         ans = a * b;
//         break;
//         case 4:
//         cout<<"Add case"<<endl;
//         ans = a / b;
//         break;
//         default:
//         cout<<"invalid operation"<<endl;
//         return 0;


//     }
//     cout<<"Answer is "<<ans;
//     return 0;
//     }






// int main()
// {
//     float a;
//     cout<<"Value of a :-- ";
//     cin>>a;
//     float b;
//     cout<<"Value of b :-- ";
//     cin>>b;

//     int op;
//     cout<<"Chose the operation :-- ";
//     cin>>op;

//     float ans = 0;

//     switch (op)
//     {
//         // CASE ONE FOR ADDITION
//         case 1: 
//         cout<<"ADD CASE"<<endl;
//         ans = a + b;
//         break;

//         // CASE TWO FOR SUBTRACTION
//         case 2:
//         cout<<"SUB CASE"<<endl;
//         ans = a - b;
//         break;

//         // CASE TWO FOR MULTIPLICATION
//         case 3:
//         cout<<"MULT CASE"<<endl;
//         ans = a * b;
//         break;

//         // CASE TWO FOR DIVITION
//         case 4:
//         cout<<"DIV CASE"<<endl;
//         ans = a / b;
//         break;

//         default:
//         cout<<"Invalid Operation"<<endl;
//         return 0;
//     }

//         cout<<"ANSWER IS :-- "<<ans;
//         return 0;
        
// }



