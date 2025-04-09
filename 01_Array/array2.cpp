// #include <iostream>
// #include <vector>
// #include <queue>
// #include <tuple>

// using namespace std;

// struct Cell {
//     int x, y, dist;
// };

// int bfs(const vector<vector<int>>& grid, pair<int, int> src, pair<int, int> dest, pair<int, int> move_rule) {
//     int M = grid.size(), N = grid[0].size();
//     vector<vector<bool>> visited(M, vector<bool>(N, false));

//     // Directions for forward, right, left, back
//     vector<pair<int, int>> directions = {
//         {move_rule.first, move_rule.second},         // Forward
//         {move_rule.second, -move_rule.first},        // Right
//         {-move_rule.second, move_rule.first},        // Left
//         {-move_rule.first, -move_rule.second}        // Back
//     };

//     queue<Cell> q;
//     q.push({src.first, src.second, 0});
//     visited[src.first][src.second] = true;

//     while (!q.empty()) {
//         Cell curr = q.front();
//         q.pop();

//         // Check if we reached the destination
//         if (curr.x == dest.first && curr.y == dest.second) {
//             return curr.dist;
//         }

//         // Explore all 4 possible directions
//         for (const auto& dir : directions) {
//             int newX = curr.x + dir.first;
//             int newY = curr.y + dir.second;

//             if (newX >= 0 && newX < M && newY >= 0 && newY < N && grid[newX][newY] == 0 && !visited[newX][newY]) {
//                 visited[newX][newY] = true;
//                 q.push({newX, newY, curr.dist + 1});
//             }
//         }
//     }

//     // If we cannot reach the destination
//     return -1;
// }

// int main() {
//     int M, N;
//     cin >> M >> N;

//     vector<vector<int>> grid(M, vector<int>(N));

//     for (int i = 0; i < M; ++i) {
//         for (int j = 0; j < N; ++j) {
//             cin >> grid[i][j];
//         }
//     }

//     pair<int, int> src, dest, move_rule;
//     cin >> src.first >> src.second;
//     cin >> dest.first >> dest.second;
//     cin >> move_rule.first >> move_rule.second;

//     int result = bfs(grid, src, dest, move_rule);
//     cout << result << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// void printAddres (int arr[], int size, int addres) {
//     for (int i=0; i<size; i++) {
//         addres = (addres + (4 * arr[5]));
//         break;
//     }
//         cout << "Value of Addres :-- " << addres << " " <<endl;
// }

// int main () {
//     int arr[10] = {2,4,6,8,10,12,14,16,18,20};
//     int size = 10;
//     int addres = 1000;

//     printAddres (arr, size, addres);
// }

// void accesAddres (int arr[10][12], int size, int addres) {
//     for (int i=0; i<size; i++) {
//         for (int j=0; j<size; j++) {
//             addres = (addres + (arr[i][j] * 4));
//             break;
//         }
//     }
//     cout << "Addres i and j is :-- " << addres << " " << endl;
// }

// int main () {
//     int arr[10][12] = {{1,2,3,4,5,6,7,8,9,10},{2,4,6,8,10,12,14,16,18,20}};
//     int size = 10;
//     int addres = 2000;

//     accesAddres (arr, size, addres);
// }

// class student {
//     public :
//     void setValue (int roll, string name) {
//         cout << "Roll No. :-- " << roll << endl;
//         cout << "Name :-- " << name << endl;
//     }

// // };

// int main () {
//     int roll = 101;
//     string name = "Lokesh";

//     setValue(roll, name);
// }

// void printAddres (int arr[10][12], int size, int addres, int i, int j) {
//     for (int row=0; row<size; row++) {

//         i = (i + addres + (4 * 2128));
//         j = (j + addres + (4 * 2128));
//     }

//     cout << "Value of i is :--" << i << endl;
//     cout << "Value of j is :--" << j << endl;
// }

// int main () {
//     int arr[10][12];
//     int size = 15;
//     int addres = 2000;
//     int i = 10;

//     int j = 12;

//     printAddres(arr, size, addres, i, j);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Account {
//     int Balance;
//     int AccNo;
//     string name;

//     public :
//             Account(int A, int B, int N) {
//                 AccNo = A;
//                 Balance = B;
//                 name = N;
//             }
//             void Withdraw () {
//                 int With;
//                 cout << "Enter the Amount to be withdraw" << endl;
//                 cin >> With;
//                 Balance = Balance - With;
//             }
//             void Deposite () {
//                 int dep;
//                 cout << "Enter the Account to be deposit" << endl;
//                 cin >> dep;
//                 Balance = Balance + dep;
//             }
//             void  show () {
//                 cout << "Your current balance is" <<
//             }
// };

//  #include<iostream>
//  using namespace std;

//  bool search(int nums[], int target) {
//     int n = 5;
//     int s =0;
//     int e = n-1;
//     int mid = s+(e-s)/2;

//     while(s <= e) {
//         if(nums[mid] == target) {
//             return true;
//         }
//         else if(nums[mid] < target) {
//             s = mid+1;
//         }
//         else {
//             e = mid-1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return false;

//  }

//  int main () {
//     int nums [] = {1,0,1,1,1};
//     int target = 0;

//     cout << search(nums, target);
//  }

// #include <iostream>
// #include <string>
// using namespace std;
// class BankAccount {
// protected:
//  string accountHolderName;
//  double balance;
// public:
//  BankAccount(string name, double initialBalance)
//  : accountHolderName(name), balance(initialBalance)
// {}
//  virtual void displayAccountDetails() {
//  cout << "Account Holder: " << accountHolderName << endl;
//  cout << "Balance: " << balance << endl;
//  }
//  virtual void calculateInterest() {
//  cout << "No specific interest rate applied for base account. " << endl;
//  }
//  virtual ~BankAccount() {}
// };
// class SavingsAccount : public BankAccount {
// private:
//  double interestRate;
// public:
//  SavingsAccount(string name, double initialBalance,
// double rate) : BankAccount(name, initialBalance),
// interestRate(rate) {}
//  void calculateInterest() override {
//  double interest = balance * (interestRate / 100);
//  cout << "Savings Account Interest: " << interest << endl;
//  }
//  void displayAccountDetails() override {
//  cout << "Savings Account Holder: " << accountHolderName
// << endl;
//  cout << "Balance: " << balance << endl;
//  cout << "Interest Rate: " << interestRate << "%" <<
// endl;
//  }
// };
// class CurrentAccount : public BankAccount {
// private:
//  double overdraftLimit;
// public:
//  CurrentAccount(string name, double initialBalance,
// double overdraft)
//  : BankAccount(name, initialBalance),
// overdraftLimit(overdraft) {}
//  void displayAccountDetails() override {
//  cout << "Current Account Holder: " << accountHolderName
// << endl;
//  cout << "Balance: " << balance << endl;
//  cout << "Overdraft Limit: " << overdraftLimit << endl;
//  }
//  void calculateInterest() override {
// cout << "Current Account has no interest applied." << endl;
//  }
// };
// class BankingOperations {
// public:
//  void deposit(double amount, double &balance) {
//  balance += amount;
// cout << "Deposited " << amount << ". New Balance: " <<
// balance << endl;
//  }
//  void deposit(double amount, double &balance, double
// bonus) {
//  balance += amount + bonus;
//  cout << "Deposited " << amount << " with bonus " <<
// bonus
//  << ". New Balance: " << balance << endl;
//  }
// };
// int main() {
//  double balance = 1000.0;
//  BankingOperations operations;
//  operations.deposit(500.0, balance);
//  operations.deposit(500.0, balance, 50.0);
//  cout << "\n";
//  BankAccount *account1 = new SavingsAccount("Alice",
// 2000.0, 5.0);
//  BankAccount *account2 = new CurrentAccount("Bob",
// 1500.0, 500.0);
//  account1->displayAccountDetails();
//  account1->calculateInterest();
//  cout << "\n";
//  account2->displayAccountDetails();
//  account2->calculateInterest();
//  delete account1;
//  delete account2;
//  return 0;
// }

// #include <iostream>
// using namespace std;
// class Student {
// private:
//  string name;
//  int marks[3];
//  float percentage;
// public:
//  Student(string studentName, int subject1, int subject2, int
// subject3) {
//  name = studentName;
//  marks[0] = subject1;
//  marks[1] = subject2;
//  marks[2] = subject3;
//  calculatePercentage();
//  }
//  void calculatePercentage() {
//  int totalMarks = 0;
//  for (int i = 0; i < 3; i++) {
//  totalMarks += marks[i];
//  }
//  percentage = (float(totalMarks) / 300) * 100;
//  }
//  bool isEligible() {
//  return percentage >= 45.0;
//  }
//  void displayDetails() {
//  cout << "Student Name: " << name << endl;
//  cout << "Marks: " << marks[0] << ", " << marks[1] << ",  " << marks[2] << endl;
//  cout << "Percentage: " << percentage << "%" << endl;
//  if (isEligible()) {
//  cout << "Status: Eligible" << endl;
//  } else {
//  cout << "Status: Not Eligible" << endl;
//  }
//  }
// };
// int main() {
//  string studentName;
//  int mark1, mark2, mark3;
//  cout << "Enter Student Name: ";
//  cin >> studentName;
//  cout << "Enter marks for 3 subjects (out of 100): ";
//  cin >> mark1 >> mark2 >> mark3;
//  Student student(studentName, mark1, mark2, mark3);
//  student.displayDetails();
//  return 0;
// }

// #include <iostream>
// using namespace std;
// class ObjectCounter
// {
// private:
//     static int objectCount; // Static variable to keep track of objects created and destroyed
//     public :
//         // Constructor
//         ObjectCounter()
//     {
//         objectCount++; // Increment object count when an object is created
//         cout
//             << "Object created. Total objects: " << objectCount << endl;
//     }
//     // Destructor
//     ~ObjectCounter()
//     {
//         objectCount--; // Decrement object count when an object is destroyed
//                 cout
//             << "Object destroyed. Total objects: " << objectCount << endl;
//     }
//     // Static method to get the current count of objects
//     static int getObjectCount()
//     {
//         return objectCount;
//     }
// };
// // Initialize static member
// int ObjectCounter::objectCount = 0;
// int main()
// {
//     cout << "Starting program...\n";
//     // Block to test object creation and destruction
//     {
//         ObjectCounter obj1; // First object created
//         ObjectCounter obj2; // Second object created
//         cout << "Current object count: " << ObjectCounter::getObjectCount() << endl;
//     } // obj1 and obj2 go out of scope, destructors are called
//     cout << "Program ending. Final object count: " << ObjectCounter::getObjectCount() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//  int rows, cols;
//  cout << "Enter the number of rows and columns: ";
//  cin >> rows >> cols;
//  // Dynamically allocating memory for two matrices (A and B)
//  int **A = new int*[rows];
//  int **B = new int*[rows];
//  for(int i = 0; i < rows; i++) {
//  A[i] = new int[cols];
//  B[i] = new int[cols];
//  }
//  // Dynamically allocating memory for result matrices
//  int **sum = new int*[rows];
//  int **diff = new int*[rows];
//  for(int i = 0; i < rows; i++) {
//  sum[i] = new int[cols];
//  diff[i] = new int[cols];
//  }
//  cout << "Enter elements of matrix A:" << endl;
//  for(int i = 0; i < rows; i++) {
//  for(int j = 0; j < cols; j++) {
//  cout << "A[" << i << "][" << j << "] = ";
//  cin >> A[i][j];
//  }
//  }
//  cout << "Enter elements of matrix B:" << endl;
//  for(int i = 0; i < rows; i++) {
//  for(int j = 0; j < cols; j++) {
//  cout << "B[" << i << "][" << j << "] = ";
//  cin >> B[i][j];
//  }
//  }
//  for(int i = 0; i < rows; i++) {
//  for(int j = 0; j < cols; j++) {
//  sum[i][j] = A[i][j] + B[i][j];
//  diff[i][j] = A[i][j] - B[i][j];
//  }
//  }
//  cout << "\nMatrix A:" << endl;
//  for(int i = 0; i < rows; i++) {
//  for(int j = 0; j < cols; j++) {
//  cout << A[i][j] << " ";
//  }
//  cout << endl;
//  }
//  cout << "\nMatrix B:" << endl;
//  for(int i = 0; i < rows; i++) {
//  for(int j = 0; j < cols; j++) {
//  cout << B[i][j] << " ";
//  }
//  cout << endl;
//  }
//  cout << "\nMatrix Sum (A + B):" << endl;
//  for(int i = 0; i < rows; i++) {
//  for(int j = 0; j < cols; j++) {
//  cout << sum[i][j] << " ";
//  }
//  cout << endl;
//  }
//  cout << "\nMatrix Difference (A - B):" << endl;
//  for(int i = 0; i < rows; i++) {
//  for(int j = 0; j < cols; j++) {
//  cout << diff[i][j] << " ";
//  }
//  cout << endl;
//  }
//  // Deallocating memory
//  for(int i = 0; i < rows; i++) {
//  delete[] A[i];
//  delete[] B[i];
//  delete[] sum[i];
//  delete[] diff[i];
//  }
//  delete[] A;
//  delete[] B;
//  delete[] sum;
//  delete[] diff;
//  return 0; }

// #include <iostream>
// using namespace std;
// class AccessModifiersDemo {
// private:
//  int privateVar;
//  void privateMethod() {
//  cout << "Private method accessed. PrivateVar = " <<
// privateVar << endl;
//  }
// protected:
//  int protectedVar;
//  void protectedMethod() {
//  cout << "Protected method accessed. ProtectedVar = " <<
// protectedVar << endl;
//  }
// public:
//  int publicVar;
//  AccessModifiersDemo() {
//  privateVar = 10;
//  protectedVar = 20;
//  publicVar = 30;
//  }
//  void publicMethod() {
//  cout << "Public method accessed. PublicVar = " <<
// publicVar << endl;
//  privateMethod();
//  protectedMethod();
//  }
// };
// class DerivedClass : public AccessModifiersDemo {
// public:
//  void accessProtectedMembers() {
//  protectedVar = 50;
//  cout << "Accessing protected members in DerivedClass: ProtectedVar = " << protectedVar << endl;
//  protectedMethod();
//  }
// };
// int main() {
//  AccessModifiersDemo obj;
//  cout << "PublicVar before change: " << obj.publicVar <<
// endl;
//  obj.publicVar = 100;
//  obj.publicMethod();
//  DerivedClass derivedObj;
//  derivedObj.accessProtectedMembers();
//  return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// class Course
// {
//     string courseName;

// public:
//     Course(const string &name) : courseName(name) {}
//     string getCourseName() const
//     {
//         return courseName;
//     }
// };
// class Teacher
// {
//     string name;
//     vector<Course> courses;

// public:
//     Teacher(const string &teacherName) : name(teacherName) {}
//     void addCourse(const Course &course)
//     {
//         courses.push_back(course);
//     }
//     void showCourses() const
//     {
//         cout << "Professor " << name << " teaches the following courses : " << endl;
//                                 for (const auto &course : courses)
//         {
//             cout << " - " << course.getCourseName() << endl;
//         }
//     }
//     string getName() const
//     {
//         return name;
//     }
// };
// class Department
// {
//     string deptName;
//     vector<Teacher *> teachers;

// public:
//     Department(const string &name) : deptName(name) {}
//     void addTeacher(Teacher *teacher)
//     {
//         teachers.push_back(teacher);
//     }
//     void showTeachers() const
//     {
//         cout << deptName << " Department has the following teachers : " << endl;
//                        for (const auto &teacher : teachers)
//         {
//             cout << " - " << teacher->getName() << endl;
//         }
//     }
// };
// int main()
// {
//     Course math("Mathematics");
//     Course oopm("OOPM");
//     Course ds("Data Structure");
//     Teacher teacher1("Prof. Mukesh Tiwari");
//     teacher1.addCourse(math);
//     Teacher teacher2("Prof. Pankaj Pali");
//     teacher2.addCourse(oopm);
//     Teacher teacher3("Prof. Zohaib Hasan");
//     teacher3.addCourse(ds);
//     Department CSE("CSE");
//     CSE.addTeacher(&teacher1);
//     CSE.addTeacher(&teacher2);
//     CSE.addTeacher(&teacher3);
//     CSE.showTeachers();
//     cout << endl;
//     teacher1.showCourses();
//     cout << endl;
//     teacher2.showCourses();
//     cout << endl;
//     teacher3.showCourses();
//     return 0;
// }



// #include <iostream>
// #include <cmath>
// using namespace std;
// // Interface for Shape
// class Shape {
// public:
//  virtual double calculateArea() const = 0;
//  virtual double calculatePerimeter() const = 0;
//  virtual ~Shape() {}
// };
// class Rectangle : public Shape {
// private:
//  double length;
//  double width;
// public:
//  Rectangle(double l, double w) : length(l), width(w) {}
//  double calculateArea() const override {
//  return length * width;
//  }
//  double calculatePerimeter() const override {
//  return 2 * (length + width);
//  }
// };
// class Circle : public Shape {
// private:
//  double radius;
// public:
//  Circle(double r) : radius(r) {}
//  double calculateArea() const override {
//  return M_PI * radius * radius;
//  }
//  double calculatePerimeter() const override {
//  return 2 * M_PI * radius;
//  }
// };
// int main() {
//  Shape* rect = new Rectangle(10, 5);
//  Shape* circ = new Circle(7);
//  cout << "Rectangle:" << endl;
//  cout << "Area: " << rect->calculateArea() << endl;
//  cout << "Perimeter: " << rect->calculatePerimeter() << 
// endl;
//  cout << "Circle:" << endl;
//  cout << "Area: " << circ->calculateArea() << endl;
//  cout << "Perimeter: " << circ->calculatePerimeter() << 
// endl;
//  delete rect;
//  delete circ;
//  return 0;
// }


// #include <iostream>
// #include <cmath> // For M_PI
// // Abstract base class
// class Shape {
// public:
//  virtual double area() = 0;
//  virtual ~Shape() {}
// };
// class Circle : public Shape {
// private:
//  double radius;
// public:
//  Circle(double r) : radius(r) {}
//  double area() override {
//  return M_PI * radius * radius;
//  }
// };
// class Rectangle : public Shape {
// private:
//  double width, height;
// public:
//  Rectangle(double w, double h) : width(w), height(h) {}
//  double area() override {
//  return width * height;
//  }
// };
// int main() {
//  Shape* circle = new Circle(5.0);
//  Shape* rectangle = new Rectangle(4.0, 6.0);
//  std::cout << "Area of Circle: " << circle->area() << 
// std::endl;
//  std::cout << "Area of Rectangle: " << rectangle->area() << std::endl;
//  delete circle;
//  delete rectangle;
//  return 0;
// }



// #include <iostream>
// #include <stdexcept> // For standard exceptions
// using namespace std;
// class BankAccount {
// private:
//  double balance;
// public:
//  BankAccount(double initial_balance) {
//  if (initial_balance < 0) {
//  throw invalid_argument("Initial balance cannot be negative!");
//  }
//  balance = initial_balance;
//  }
//  void deposit(double amount) {
//  if (amount <= 0) {
//  throw invalid_argument("Deposit amount must be positive!");
//  }
//  balance += amount;
//  cout << "Deposited: " << amount << endl;
//  }
//  void withdraw(double amount) {
//  if (amount <= 0) {
//  throw invalid_argument("Withdrawal amount must be positive!");
//  }
//  if (amount > balance) {
//  throw runtime_error("Insufficient funds for withdrawal!");
//  }
//  balance -= amount;
//  cout << "Withdrawn: " << amount << endl;
//  }
//  void checkBalance() const {
//  cout << "Current balance: " << balance << endl;
//  }
// };
// int main() {
//  try {
//  BankAccount account(1000);
//  account.checkBalance();
//  account.deposit(500);
//  account.deposit(-100);
//  } catch (const invalid_argument &e) {
//  cout << "Invalid argument exception: " << e.what() << 
// endl;
//  } catch (const runtime_error &e) {
//  cout << "Runtime exception: " << e.what() << endl;
//  }
//  try {
//  BankAccount account2(500);
//  account2.withdraw(600);
//  } catch (const invalid_argument &e) {
//  cout << "Invalid argument exception: " << e.what() << 
// endl;
//  } catch (const runtime_error &e) {
//  cout << "Runtime exception: " << e.what() << endl;
//  }
//  return 0;
// }



// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// class Account {
// private:
//  string accountNumber;
//  string accountHolder;
//  string pin;
//  double balance;
// public:
//  Account(string accNum, string accHolder, string pin, double 
// initBalance)
//  : accountNumber(accNum), accountHolder(accHolder), 
// pin(pin), balance(initBalance) {}
//  string getAccountNumber() {
//  return accountNumber;
//  }
//  string getAccountHolder() {
//  return accountHolder;
//  }
//  double getBalance() {
//  return balance;
//  }
//  bool verifyPin(string enteredPin) {
//  return pin == enteredPin;
//  }
//  void deposit(double amount) {
//  if (amount > 0) {
//  balance += amount;
//  cout << "Deposited: " << amount << "\nNew Balance: " << balance << endl;
//  } else {
//  cout << "Invalid deposit amount.\n";
//  }
//  }
//  bool withdraw(double amount) {
//  if (amount <= balance && amount > 0) {
//  balance -= amount;
//  cout << "Withdrawn: " << amount << "\nNew Balance: " << balance << endl;
//  return true;
//  } else {
//  cout << "Insufficient funds or invalid amount.\n";
//  return false;
//  }
//  }
//  void showBalance() {
//  cout << "Account Balance: " << balance << endl;
//  }
// };
// class Transaction {
// private:
//  Account &account;
// public:
//  Transaction(Account &acc) : account(acc) {}
//  void withdrawAmount(double amount) {
//  if (!account.withdraw(amount)) {
//  cout << "Transaction failed.\n";
//  }
//  }
//  void depositAmount(double amount) {
//  account.deposit(amount);
//  }
//  void checkBalance() {
//  account.showBalance();
//  }
// };
// class ATM {
// private:
//  vector<Account> accounts;
//  Account* currentAccount;
// public:
//  ATM() : currentAccount(nullptr) {}
//  void addAccount(Account acc) {
//  accounts.push_back(acc);
//  }
//  Account* authenticate(string accNum, string pin) {
//  for (auto &acc : accounts) {
//  if (acc.getAccountNumber() == accNum && 
// acc.verifyPin(pin)) {
//  currentAccount = &acc;
//  return currentAccount;
//  }
//  }
//  cout << "Authentication failed!\n";
//  return nullptr;
//  }
//  void displayMenu() {
//  if (!currentAccount) {
//  cout << "No account logged in.\n";
//  return;
//  }
//  cout << "\nATM Menu\n";
//  cout << "1. Deposit\n";
//  cout << "2. Withdraw\n";
//  cout << "3. Check Balance\n";
//  cout << "4. Exit\n";
//  }
//  void performTransaction(int choice) {
//  if (!currentAccount) {
//  cout << "Please log in first.\n";
//  return;
//  }
//  Transaction txn(*currentAccount);
//  double amount;
//  switch (choice) {
//  case 1:
//  cout << "Enter amount to deposit: ";
//  cin >> amount;
//  txn.depositAmount(amount);
//  break;
//  case 2:
//  cout << "Enter amount to withdraw: ";
//  cin >> amount;
//  txn.withdrawAmount(amount);
//  break;
//  case 3:
//  txn.checkBalance();
//  break;
//  case 4:
//  cout << "Exiting ATM...\n";
//  currentAccount = nullptr;
//  break;
//  default:
//  cout << "Invalid choice.\n";
//  }
//  }
// };
// int main() {
//  ATM atm;
//  // Adding sample accounts
//  Account acc1("12345", "John Doe", "1234", 5000);
//  Account acc2("67890", "Jane Smith", "5678", 3000);
//  atm.addAccount(acc1);
//  atm.addAccount(acc2);
//  string accNum, pin;
//  cout << "Enter Account Number: ";
//  cin >> accNum;
//  cout << "Enter PIN: ";
//  cin >> pin;
//  Account* loggedInAccount = atm.authenticate(accNum, pin);
//  if (loggedInAccount) {
//  int choice;
//  do {
//  atm.displayMenu();
//  cout << "Select an option: ";
//  cin >> choice;
//  atm.performTransaction(choice);
//  } while (choice != 4);
//  }
//  return 0;
// }