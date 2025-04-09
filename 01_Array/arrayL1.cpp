// // // #include<iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int arr[100];
// // //     char ch[200];
// // //     bool flags[300];

// // //     cout<<"Array created succesfully"<<endl;

// // //     return 0;
    
// // // }


// // #include <iostream>
// // using namespace std;

// // int main() {
// //   int arr[100];
// //   char ch[200];
// //   bool flags[300];
// //   double dool[400];

// //   cout << "Array created succesfull" << endl;
// //   return 0;
// // }


// #include <iostream>
// #include<limits.h>
// using namespace std;

// void printArray(int arr[], int size) {
//   for(int i=0; i<size; i++) {
//     cout << arr[i] << " " ;
//   }
//   cout << endl;
// }

// //present -> true;
// //absent -> false;

// bool linearSearch(int arr[], int size, int target) {

//   for(int i=0; i<size; i++) {
//     if(arr[i] == target) {
//       //found
//       return true;
//     }
//   }
//   //not found
//   return false;
// }

// void countZeroOne(int arr[], int size) {
//   int zeroCount = 0;
//   int oneCount = 0;

//   for(int i=0; i<size; i++) {
//     if(arr[i] == 0) {
//       zeroCount++;
//     }
//     if(arr[i] == 1) {
//       oneCount++;
//     }
//   }

//   cout << "ZeroCount: " << zeroCount << endl;
//   cout << "oneCOunt: " << oneCount << endl;
  
// }

// int findMinimumInArray(int arr[], int size) {
//   //ans store variable
//   int minAns = INT_MAX;

//   for(int i=0; i<size; i++) {
//     if(arr[i] < minAns) {
//       minAns = arr[i];
//     }
//   }

//   return minAns;
// }
// void reverseArray(int arr[], int size) {
  

//   // for(int left =0, right=size-1; left<=right; left++, right--) {
//   //  swap(arr[left], arr[right]);
//   // }
  
//   int left = 0;
//   int right = size - 1;
//   while(left <= right) {
//     swap(arr[left], arr[right]);
//     left++;
//     right--;
//   }

//   //printing the array;
//   for(int i=0; i<size; i++) {
//     cout << arr[i] << " "; 
//   }
  
// }

// void extremePrint(int arr[], int size) {
//   int left = 0;
//   int right = size - 1;

//   while(left <= right) {
//     if(left == right) {
//       cout << arr[left] << endl;  
//     }
//     else {
//       cout << arr[left] << endl;
//       cout << arr[right] << endl;
//     }
    
//     left++;
//     right--;
//   }
  
// }

// int main() {

//   int arr[6] = {10,20,30,40,50,60};
//   int size = 6;

//   // reverseArray(arr, size);
//   extremePrint(arr, size) ;
  

  
//   // int arr[] = {10,8,31,4,3,1,-51};
//   // int size = 7;

//   // int minimum = findMinimumInArray(arr, size);
//   // cout << "Minimum number is: " << minimum << endl;

  

//   // // -2 to the  power 31
//   // cout << INT_MIN << endl;
//   // //2 to the power 31 - 1
//   // cout << INT_MAX << endl;
  
//   // int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};
//   // //zero => 7
//   // //one => 8
//   // int size = 15;
//   // countZeroOne(arr,size);


//   // int arr[5] = {2,4,6,8,10};
//   // int size = 5;
//   // int target = 10;

//   // bool ans = linearSearch(arr, size, target);

//   // if(ans == 1) {
//   //  cout << "Target found" << endl;
//   // }
//   // else {
//   //  cout << "Target Not found" << endl;
//   // }
  
//   // //function call
//   // printArray(arr,  size);

//   //array creation
//   // int arr[101];
//   // char ch[102];
//   // bool flags[223];
//   // long num[900];
//   // short snum[1000];

//   // cout << "Array created successfully" << endl;

//   //int arr[100];

//   // int a = 5;
//   // cout << "Size of a: "<< sizeof(a) << endl;
//   // //cout << "Address of a :" << &a << endl;


//   // int arr[10];
//   // cout << "Size of arr: "<< sizeof(arr) << endl;
//   // //cout << "Base address if Arr is: " << &arr << endl;
//   // //cout << "Base address if Arr is: " << arr << endl;\

//   // int arr[] = {2,3,4,56,6};

//   // int brr[5] = {1,2,3,4,5};

//   // int crr[5] = {2,3};
//   // //error
//   // int drr[2] = {1,2,3,44,5};

//   // int arr[50] = {5,8,9,12,13};

//   // int n = 5;
//   // for(int i=0; i<n; i++) {
//   //  cout << arr[i] << " ";
//   // }

//   // cout << arr[0] << endl;
//   // cout << arr[1] << endl;
//   // cout << arr[2] << endl;
//   // cout << arr[3] << endl;
//   // cout << arr[4] << endl;

//   //taking input in an array
//   // int arr[5] ;
//   // int n = 5;
//   // for(int i=0; i<n; i++) {
//   //  cout << "Enter the value for index " << i << ": " ;
//   //  cin >> arr[i];
//   //  cout << endl;
//   // }

//   // //printing an array
//   // cout << "Printing the array " << endl;

//   // for(int i=0; i<n; i++) {
//   //  cout << arr[i] << " " ;
//   // }

//   //array create krdo
//   // int arr[10];
//   // //input lelo
//   // int n = 10;
//   // for(int i=0; i<n; i++) {
//   //  cin >> arr[i];
//   // }
//   // cout << "Printing after taking input" << endl;
//   // //print
  
//   // for(int i=0; i<n; i++) {
//   //  cout << arr[i] << " ";
//   // }
//   // //double - up
//   // //cout << "Doubles: " << endl;
//   // for(int i=0; i<n; i++) {
//   //  arr[i] = 2*arr[i];
//   // }

//   // //print
//   // cout << "Printing after taking double" << endl;
//   // for(int i=0; i<n; i++) {
//   //  cout << arr[i] << " ";
//   // }


//   // int arr[5];

//   // //input;
//   // int n = 5;
//   // cout << "Enter the input " << endl;
//   // for(int i=0; i<n; i++) {
//   //  cin >> arr[i] ;
//   // }

//   // //calculate sum;
//   // int sum  = 0;
//   // for(int i=0; i<n; i++) {
//   //  sum = sum + arr[i];
//   // }

//   // cout << "printing sum: " << sum << endl;


//   // int arr[5] = {2,4,6,8,10};
//   // int target = 11;
//   // int n = 5;

//   // bool flag = 0;
//   // // 0 -> not found;
//   // //1 -> found
  
//   // for(int i=0; i<n; i++) {
//   //  if(arr[i] == target) {
//   //    //found
//   //    flag = 1;
//   //    break;
//   //  }
//   // }

//   // if(flag == 1) {
//   //  cout << "target found";
//   // }
//   // else {
//   //  cout << "target not found" << endl;
//   // }
  
    
//   return 0;
// }


// #include <iostream>
// using namespace std;
    
// int main() {
//     int t[3] = { 3, 2, 1 }, *ptr = t + 1;
//     (*(ptr + 1))++;
//     *ptr++;
//     cout << t[1] << t[2];
//     return 0;
// }


// #include <iostream>
// using namespace std;
    
// int main() {
//     float x = 3.14, *p = &x;
//     p[0] = ++x;
//     cout << x;
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     int tab[5] = { 1, 2, 4, 8, 16 };
//     int *p1 = tab, *p2 = tab + 4;
//     for(int *p = p1 + 1; p < p2; p++)
//         *p = p[-1] * 2;
//     cout << tab[1] << tab[2];
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     float f[2];
//     float *p1 = f, *p2 = p1 + 1;
//     cout << (p2 - p1) / sizeof(float);
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     float fun(float arg) {
//     return arg * arg + arg + 1;
// }
   
// int main() {
//     cout << fun(fun(1.0));
//     return 0;
// }

// }


// #include <iostream>
// using namespace std;
    
// int fun(float a, float b) {
//     return a / b;
// }
   
// int main() {
//     cout << fun(fun(1.0,2.0),fun(2.0,1.0));
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// float Float(float x) {
//     return 2 * x / (.5 * x);
// }
   
// void Void(int n) {
//     float v = n;
//     while(n) {
//         v = Float(v);
//         n >>= 1;
//     }
//     cout << v;
// }
    
// int main() {
//     Void(4);
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int f1(int a) {
//     return ++a;
// }
   
// int f2(int &a) {
//     return ++a;
// }
    
// int f3(int *a) {
//     return *a + 1;
// }
    
// int main() {
//     int value = 2;
//     cout << f1(value);
//     cout << f2(value);
//     cout << f3(&value);
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int f1(int *a) {
//     return *a;
// }
   
// int *f2(int *a) {
//     return a;
// }
   
// int *f3(int &a) {
//     return &a;
// }
    
// int main() {
//     int value = 2;
//     cout << f1(f2(f3(value)));
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int f1(int *a) {
//     return *a + 1;
// }
   
// int *f2(int *a) {
//     return a + 1;
// }
    
// int *f3(int &a) {
//     return &a + 1;
// }
    
// int main() {
//     int t[] = {0, 1, 2, 3};
//     cout << f1(f3(*f2(t)));
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int fun(int p1 = 1, int p2 = 1) {
//     return p2 << p1;
// }
    
// int main() {
//     cout << fun(fun(),fun(2));
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// string fun(string &t, string s = "", int r = 2) {
//     while(--r)
//         s += s;
//     t = t + s;
//     return s;
// }
    
// int main() {
//     string name = "x";
//     cout << fun(name, name);
//     cout << name;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// string fun(string t, string s = "x", int r = 1) {
//     while(--r)
//         s += s;
//     t = t + s;
//     return s;
// }
    
// int main() {
//     string name = "a";
//     cout << fun(name);
//     cout << name;
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int fun(int a, int b) {
//     return a + b;
// }
    
// int fun(int a, char b) {
//     return b - a;
// }
    
// int fun(float a, float b) {
//     return a * b;
// }
    
// int main() {
//     cout << fun(1,0) << fun('a','c') << fun(2.f,2.f);
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int fun(long a, long b = 1) {
//     return a << b;
// }
    
// int fun(int a, char b = 'z') {
//     return b - a;
// }
    
// int fun(float a, float b = 0) {
//     return a * b;
// }
    
// int main() {
//     cout << fun(1L) << fun('x') << fun(2e0f);
//     return 0;
// // }

// #include <iostream>
// using namespace std;
    
// int fun(long a) {
//     return a / a;
// }
   
// int fun(int a) {
//     return 2 * a;
// }
    
// int fun(double a = 3.0) {
//     return a;
// }
    
// int main() {
//     cout << fun(1000000000L) << fun (1L) << fun(1.f);
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int fun(int t[]) {
//     t[0] += t[1];
//     return t[0];
// }
    
// int main() {
//     int t[] = { 5,6,7 };
//     cout << fun(t);
//     cout << t[0];
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int *make(int v) {
//     int *p = new int;
//     *p = v + 1;
//     return p;
// }
// int *play(int &v) {
//     cout << ++v;
//     return &v;
// }
    
// void remove(int *v) {
//     delete v;
// }
//     int main() {
//     remove(play(*make(3)));
//     return 0;
// }

// #include <iostream>
// using namespace std;
   
// int main() {
//     int *val = new int;
//     *val = sizeof(val) / sizeof(int *);
//     int *tab = new int[*val];
//     tab[0] = *val;
//     delete val;
//     cout << *tab;
//     delete [] tab;
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// struct s {
//     float *f;
// };
    
// void make(s *p, float x = 10) {
//     float *f = new float;
//     *f = sizeof(*f) / sizeof(float) * 10;
//     p->f = f;
// }
    
// int main() {
//     s *ss = new s;
//     make(ss);
//     cout << *(*ss).f;
//     delete ss->f;
//     delete ss;
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     char   t[3][3], *p = (char *)t;
       
//     for(int i = 0; i < 9; i++)
//         *p++ = 'a' + i;
//     cout << t[1][1];
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     int *it[3];
     
//     for(int i = 0; i < 3; i++) {
//         it[i] = new int [i + 1];
//         for(int j = 0; j < i + 1; j++)
//             it[i][j] = 10 * i + j;
//     }
//     cout << it[2][2];
//     for(int i = 0; i < 3; i++)
//         delete [] it[i];
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     short s = 1;
//     int i = 2;
//     long l = 3;
//     float f = 4.4;
//     double d = 6.6;
        
//     cout << s/i + f/i + d/s;
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     short s = 1;
//     int i = 2;
//     long l = 3;
//     float f = 4.4;
//     double d = 6.6;
        
//     cout << s/float(i) + int(f)/i + long(d)/s;
//     return 0;
// // }

// #include <iostream>
// using namespace std;
    
// int main() {
//     int i = 2;
//     float f = 5.8;
        
//     f = (int)f;
//     i = (float) i;
//     cout << f/i;
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     int i = 2;
//     float f = 4.4;
        
//     cout << f % float(i);
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// int main() {
//     int i = 2;
//     string s = "2";
        
//     cout << (s+i);
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// int main() {
//     string s = "1"; // Change the value of s to "1"
        
//     cout << s  << "b" << "c";
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// int main() {
//     string s = "a";
        
//     cout << s + "b" + "c";
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// int main() {
//     string s1 = "ab";
//     string s2 = "Abc";
        
//     if(s1 > s2)
//         cout << "yes";
//     else
//         cout << "NO";
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     string s1 = "Ab";
//     string s2 = "Abc";
        
//     cout << s1.compare(s1);
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// int main() {
//     string s1 = "1";
//     string s2 = "12";
        
//     cout << s1.compare(s2);
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
  
// int main() {
//     string s = "0123456789";
//     cout << s.substr(3,7).substr(2).substr();
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// int main() {
//     string s = "ABCDEF";
//     for(int i = 1; i < s.length(); i += 2)
//         s[i - 1] = s[i] + 'a' - 'A';
//     cout << s;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// int main() {
//     string s = "AB";
//     s.append(s).push_back(s[s.length() - 1]);
//     cout << s;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
    
// int main() {
//     string s1 = "aleph";
//     string s2 = "alpha";
//     string s;
//     s1.swap(s2);
//     s2.swap(s);
//     s.swap(s2);
//     cout << s2;
//     return 0;
// }

// #include <iostream>
    
// using namespace std;
//     int A;

   
// namespace SpaceB {
//     int A;
// }
   
// namespace SpaceB {
//     int A;
// }
    
// using namespace SpaceA, SpaceB;
    
// int main() {
//     SpaceA::A = SpaceB::A = 1;
//     std::cout << A + 1;
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// namespace S1 {
// int A = 1;
// }
    
// namespace S2  {
// int A = 2 ;
// }
    
// int main(void) {
//     { using namespace S1;
//         S2::A = A + 1;
//     }
//     { using namespace S2;
//         S1::A = A + 1;
//     }
//     cout << S1::A << S2::A;
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// namespace S {
// int A = 1;
// }
    
// namespace S {
// int B = A + 2 ;
// }
    
// int main(void) {
//     S::A = S::A + 1;
//     { using namespace S;
//         ++B;
//     }
//     cout << S::B << S::A;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i, k = 1;
//     for(i = 0; i < 3; i += 2)
//         k++;
//     cout << k;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i = 2, j = i++, k = i++;

//     cin >> i;
//     cout << k - i << j - i;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i = 1, k = i & 0;
    
//     do {
//         k++;
//         if(k > 1)
//             i = k;
//     } while(i < 2);

//     cout << k;
// // }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i = 1, k = i << 1;
    
//     switch(k) {
//         case 1:     i += 1;
//                     break;
//         case 2:     i += 2;
//                     break;
//         default:    i += 3;
//     }
//     cout << i;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     bool b1 = !true;
//     bool b2 = !b1 && false;
//     bool b3 = b2 || true;

//     if(b3)
//         cout << "true";
//     else
//         cout << "false" ;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//         int a = 0x02, b = 001;
//         int c = a ^ b;
//         int d = c | a;
//         int e = d & 0;

//         cout << e;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a = 2, b = a >> 1;
//     int c = a >> b;
//     int d = 1 << c;
//     int e = d >> d;

//     cout << e;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a = 2, b = a >> 1;
//     int c = b >> a;
//     int d = 1 << c;
//     int e = d << d;

//     cout << e;
// }

// #include <iostream>
// #include <vector>

// using namespace std;
    
// int main()
// {
//     vector<double> arr = { 1e-1, 1e0, 1e1 };
//     double *ptr = arr.data() + 2;

//     cout << arr[1] - *ptr;
// }

// #include <iostream>
// #include <vector>

// using namespace std;
    
// int main()
// {
//     vector<char> text(5);

//     char *chr1 = text.data() + 2, *chr2 = chr1 + 2;
//     cout << chr2 - text.data();
// }

// #include <iostream>

// using namespace std;
    
// double eval(double x)
// {
//     return x / (.5 * x);
// }
   
// void use(double n) 
// {
//     int v = 1 / n;

//     v = eval(v);
//     cout << v;
// }
    
// int main() 
// {
//     use(1.f);
// }

// #include <iostream>

// using namespace std;
    
// char do1(char *x) 
// {
//     return *x;
// }
   
// char *do2(char *y) 
// {
//     return y;
// }
   
// char *do3(char &z) 
// {
//     return &z;
// }
// int main() 
// {
//     char sign  = '1';
//     cout << do1(do2(do3(sign)));
// }

// #include <iostream>

// using namespace std;
    
// float combine(float x1 = 0.0, int x2 = 1.0) 
// {
//     return x2 + x1;
// }
    
// int main() 
// {
//     cout << combine() + combine(1.) + combine(2., 3.);
// }

// #include <iostream>
// #include <string>

// using namespace std;
    
// string replicate(string s = "x", int r = 1) 
// {
//     string t;
//     while(r--)
//         t += s;
//     return t;
// }
    
// int main() 
// {
//     string pattern = "a";
//     cout << replicate(pattern);
// }

// #include <iostream>

// using namespace std;
    
// int op(int i, int j = 1) 
// {
//     return i * j;
// }
    
// int op(char a, char b) 
// {
//     return b - a;
// }
    
// int op(float x, float y) 
// {
//     return x / y;
// }
    
// int main()
// {
//     cout << op(2) << op('c', 'a') << op(4.f, 2.f);
// }

// #include <iostream>
// #include <vector>

// using namespace std;
// void swap(float* x, float *y) 
// {
//     float z = *x;
//     *x = *y;
//     *y = z;
// }

// int main()
// {
//     vector<float> t = { 3., 2., 1. };

//     swap(&t[0], &t[2]);
//     cout << t[1];
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<float *> ft = { new float[1], new float[1], new float[1] };

//     for(int i = 0; i < 3; i++) {
//         float *p = ft[i];
//         *p = i;
//     }
//     cout << *ft[1];
//     for(int i = 0; i < 3; i++) {
//         delete [] ft[i];
//     }
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     short s = 1;
//     int i = 2;
//     float f = 4.;
//     cout << i/static_cast(s) + i/2 + i/f;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i = 2;
//     float f = 1;
//     cout << (static_cast(i) >> 1);
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string s = "123";
//     s.append(s.substr(2)).push_back(s[s.length() - 2]);
//     cout << s;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string s1 = "brick";
//     string s2 = "block";
//     string s;

//     s1.swap(s2);
//     s2.swap(s);
//     s.swap(s2);
//     cout << s1;
// }

// #include <iostream>
// #include <string>

// using namespace std;
    
// int main()
// {
//     int i = 2;
//     string s = "2";
//     cout << s == i;
// }

// #include <iostream>

// using namespace std;
 
// namespace Universe {
//     int Galaxy = 1;
// }

// namespace Universe {
//     int Planet = Galaxy + 2 ;
// }

// int main() 
// {
//     Universe::Galaxy *= 2;
//     {
//         using namespace Universe;
//         Planet++;
//     }
//     cout << Universe::Galaxy << Universe::Planet;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int k = 3;
//     if(k > 0) {
//         if(k != 3) 
//             k--;
//         if(k == 3)
//             k++;
//         }
//     if(k < 0) {
//         k = 5;
//     }
//     cout << k;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i = 0, k = i;
    
//     while(i == 0) { 
//         if(k > 1)
//             i = k;
//         ++k;
//     }

//     cout << k;
// }
//  #include <iostream>

//  using namespace std;

//  int main (){
//     float x = 1.0 / 5.0;
// int i = x;
// return 0;
//}


// int i = 0, j = i++, k = --i;
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

// #include <iostream>
// using namespace std;
// int main() {
//         int i = 5, j = 0;
//         while(i > 0) {
//             i--;
//             j++;
//         }
//         cout << j;
//         return 0;
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
// }

// #include <iostream>
// using namespace std;
// int main() {
//         float val = 100.0;
//         do {
//             val = val / 5;
//             cout << "*";
//         } while(val > 1.0);
//         return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//         for(float val = -10.0; val < 100.0; val = -val * 2)
//             cout << "*";
//         return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//         for(float val = -10.0; val < 100.0; val = -val * 2) {
//             if(val < 0 && -val >= 40)
//                 break;
//             cout << "*";
//         }
//         return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//         int a = 1, b = 2;
//         int c = a | b;
//         int d = c & a;
//         int e = d ^ 0;
//         cout << e << d << c;
//         return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//         int a = 1, b = 2;
//         int c = a << b;
//         int d = 1 << c;
//         int e = d >> d;
//         cout << e;
//         return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//         int t[] = { 8, 4, 3, 2, 1 }, i;
//         for(i = t[4]; i < t[0]; i++)
//             t[i - 1] = -t[3];
//         cout << i;
//         return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//         bool t[5];
//         for(int i = 0; i < 5; i++)
//             t[4 - i] = !(i % 2);
//         cout << t[0] && t[2];
//         return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//         int a[] = {4, 0, 3, 1, 2};
//         int b[] = {1, 2, 3, 4, 5};
//         for(int i = 0; i < 5; i++)
//             b[a[i]] = b[4 - i];
//         cout << b[0] << b[4];
//         return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//        int g[3][3] = {{2, 4, 8}, {3, 6, 9}, {5, 10, 15}};
//        for(int i = 2; i >= 0; i--)
//            for(int j = 0; i < 3; j++)
//               g[i][j] += g[j][i];
//        cout << g[1][1];
//        return 0;
// }

// #include <iostream>
// using namespace std;
//     struct str {
//     int t[3];
//     char s[3];
// };
//     int main() {
//         str a = { 1, 2, 3, 'a', 'b', 'c' };
//         str b = { 5, 6, 7, 'x', 'y', 'z' };
//         cout << char(b.s[0] + a.t[0]) << int(a.s[2] - a.s[0]) << int(b.s[2] - b.s[1]);
//         return 0;
// }

// #include <iostream>
// using namespace std;
    
// struct str {
//     int t[3];
//     char s[3];
// };
    
// int main() {
//         str z[3];
//         for(int i = 0; i < 3; i++)
//             for(int j = 0; j < 3; j++) {
//                 z[i].s[j] = '0' + i + j;
//                 z[j].t[i] = i + j;
//             }
//         cout << z[0].s[1] << z[1].t[2] << z[2].s[0];
//         return 0;
// }

// #include <iostream>
// using namespace std;
//     struct sct {
//     int t[2];
// };
//     struct str {
//     sct t[2];
// };
//    int main() {
//         str t[2] = { {0, 2, 4, 6}, {1, 3, 5, 7} };
//         cout << t[1].t[0].t[1] << t[0].t[1].t[0];
//         return 0;
// }

// #include <iostream>
// using namespace std;
//     struct sct {
//     int t[2];
// };
//     struct str {
//     sct t[2];
// };
//    int main() {
//         str t[2] = { {0, 2, 4, 6}, {1, 3, 5, 7} };
//         cout << t[1].t[0].t[1] << t[0].t[1].t[0];
//         return 0;
// }

// #include <iostream>
// using namespace std;
//     int main() {
        // char arr[5] = { 'a', 'b', 'c', 'd', 'e' };
        // for(int i = 1; i < 5; i++) {
        //     cout << "*";
        //     if((arr[i] - arr[i - 1]) % 2)
        //         continue;
        //     cout << "*";
        // }
// int i = 0, j = i++, k = --i;
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

//         return 0;
// }

// #include <iostream>
// using namespace std;

// int main ()

//     int i = 3, j, k;

// if(i > 0) j = 2 + i * i;
// if(i <= 0) j = 2 * i – 1;
// if(j >= 0) k = j % i + 2;
// if(j < 0) k = i % j + 2;
// if(k < 0) k = k % i % j;
// if(k >= 0) k = j % i % k;
// int i = 3, j = 2, k = -1;

// if(i > 0) {
//     if(j <= 0) {
//         if(k < 0)
//             k++;
//         if(k <= 0)
//             k--;
//     }
//     if(j > 0)
//         i++;
// }

// if(i <= 0)
//     j++;

// k = i + j + k;



// }


// #include<iostream>
// using namespace std;

// int main ()
// {
//     int arr [5];
//     int n=5;

//     for (int i=0; i<n; i++)
//     {
//         cout<<arr[i];
//     }
// }



// #include<iostream>
// using namespace std;

// int main ()
// {
    // int arr [10];

    // int  n = 10;

    // for (int i=0; i<n; i++)
    // {
    //     cout<<"Enter the value of index :-- "<< i << " ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }
    //     cout<<"Printing the value of array :-- ";
    //     for (int i=0; i<n; i++)
    // {
    //     cout << arr[i] <<" ";
    // }

    // for (int i=0; i<10; i++)
    // {
    //     arr[i] = 2*arr[i];
    // }
    // cout<<"Printing the value of array :-- ";

    // for (int i=0; i<n; i++)
    // {
    //     cout << arr[i] <<" ";
//     // }


//     int arr[10];
//     int n = 10;

//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Printing value after taking :-- " << endl;

//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << "Double :-- " << endl;
//     for(int i=0; i<n; i++)
//     {
//         arr[i] = 2*arr[i];
//     }

//     cout<<"Printing value after taking :-- " << endl;
//      for(int i=0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }



// #include <iostream>
// using namespace std;

// // Function initialization kiya hu
// void reversArray (int arr[], int size) {
//     int left=0;
//     int right=size-1;
    
//     // while loop initialization kiya hu
//     while (left <= right) {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }

//     // Yaha Array print ho rha using for loop
//     for (int i=0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
// }

// // yaha int main me function ko call krte hai 
// int main () {
//     int arr[6] = {20,30,40,50,60,70};
//     int size = 6;
    
//     // Yaha call hua function
//     reversArray(arr, size);
// }



// #include <iostream>
// using namespace std;

// void sumTwoNumber (int arr[], int size, int target) {
//     target = target + arr[0]+arr[1];
//     cout << target << " ";
// }

// int main () {
//     int arr[4] = {2,7,11,15};
//     int size = 4;
//     int target;

//     sumTwoNumber(arr, size, target);

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int functionCallByRefrence (int n) {
//     n++;
    
//     return n;
// }

// int main () {
//     int n = 5;
//     n = functionCallByRefrence (n);
//     cout << " N is :-- " << n << endl;

//     return 0;
// }


#include<iostream>
using namespace std; 

int functionCallByReferance (int n) {
    int&k = n;
    int&c = n;
    int&g = n;
    int&d = n;

    cout << " K is :-- " << k << endl;
    cout << " K is :-- " << c << endl;
    cout << " K is :-- " << g << endl;
    cout << " K is :-- " << d << endl;
}

int main () {
    int n = 5;

    functionCallByReferance (n);
}