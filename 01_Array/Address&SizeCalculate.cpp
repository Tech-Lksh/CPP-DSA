#include<iostream>
// #include<math.h>

using namespace std;

int main ()

{
    int arr [100];
    char ch [200];
    float sum [300];
    double snum [400];
    long long dsum [500];
    short length [600];
    bool lnum [700];

    cout<<"Addres of the Array :-- "<<&arr<<endl;
    cout<<"Addres of the Array :-- "<<&ch<<endl;
    cout<<"Addres of the Array :-- "<<&sum<<endl;
    cout<<"Addres of the Array :-- "<<&snum<<endl;
    cout<<"Addres of the Array :-- "<<&dsum<<endl;
    cout<<"Addres of the Array :-- "<<&length<<endl;
    cout<<"Addres of the Array :-- "<<&lnum<<endl;

    cout<<"Size of the Array :-- "<<sizeof(arr)<<endl;
    cout<<"Size of the Array :-- "<<sizeof(ch)<<endl;
    cout<<"Size of the Array :-- "<<sizeof(sum)<<endl;
    cout<<"Size of the Array :-- "<<sizeof(snum)<<endl;
    cout<<"Size of the Array :-- "<<sizeof(dsum)<<endl;
    cout<<"Size of the Array :-- "<<sizeof(length)<<endl;
    cout<<"Size of the Array :-- "<<sizeof(lnum)<<endl;


    return 0;

}
