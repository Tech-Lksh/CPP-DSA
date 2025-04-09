#include<iostream>
using namespace std;

int divideNumber(int divisor, int dividend){
    int s= 0;
    int e = dividend;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s <= e) {
        if(mid * divisor == dividend) {
            return mid;
        }
        if(mid * divisor < dividend) {
            // store ans
            ans= mid;
            // right me jao
            s= mid+1;
        }
        else {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
} 

int main () {
    int divisor = -7;
    int dividend = -35;


    // abs Always show positive number
    
    int ans = divideNumber(abs(divisor), abs(dividend));

    if((divisor >0 && dividend <0) || (divisor <0 && dividend >0)) {
        ans  = 0 - ans;
    }
    cout << "ans :- " << ans << endl;;
}