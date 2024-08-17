#include<iostream>
using namespace std;
int main(){

    //Fist program in cpp
cout<<"Hello World!" <<endl;

//datatypes and variables
//integer type
int x = 16;
  cout<< x  <<endl;
  int size = sizeof(x);
  cout<< size <<endl;

//character type
  char y = 'a';
  cout<< y <<endl;
  char size1 = sizeof(y);
  cout<< size1<<endl;

  //boolean typ
  bool z = true;
  cout<< z <<endl;
  bool size2 = sizeof(z);
  cout<< size2<<endl;

  //float type
  float p = 5.6;
  cout<< p <<endl;
  float size3 = sizeof(p);
  cout<< size3<<endl;

  //double type
  double q = 21.9;
  cout<< q <<endl;
  double size4 = sizeof(q);
  cout<< size4<<endl;

//Printing the ascii values
int a='g';
cout<< a <<endl;

char ch= 68;
cout<< ch <<endl;

//by default int takes positive and negative values
int b = 34 , c = -6;
cout<< b <<endl;
cout<< c <<endl;


//Operators
//Binary opertaors
 int d = 8, e = 3;

    // Addition operator
    cout << "d + e = " << (d + e) << endl;
  
    // Subtraction operator
    cout << "d - e = " << (d - e) << endl;
  
    // Multiplication operator
    cout << "d * e = " << (d * e) << endl;
  
    // Division operator
    cout << "d / e = " << (d / e) << endl;
  
    // Modulous operator
    cout << "d % e = " << (d % e) << endl;

//Relational Operators
int f = 6, h = 4;

    // Equal to operator
    cout << "f == h is " << (f == h) << endl;
  
    // Greater than operator
    cout << "f > h is " << (f > h) << endl;
  
    // Greater than or Equal to operator
    cout << "f >= h is " << (f >= h) << endl;
  
    //  Lesser than operator
    cout << "f < h is " << (f < h) << endl;
  
    // Lesser than or Equal to operator
    cout << "f <= h is " << (f <= h) << endl;
  
    // true
    cout << "f != h is " << (f != h) << endl;

//Logical Operators
 int i = 6, j = 4;

    // Logical AND operator
    cout << "i && j is " << (i && j) << endl;
  
    // Logical OR operator
    cout << "i || j is " << (i || j) << endl;
  
    // Logical NOT operator
    cout << "!j is " << (!j) << endl;

    //Assignment operators
     int k = 6, l = 4;

    // Assignment Operator
    cout << "k = " << k << endl;
  
    //  Add and Assignment Operator
    cout << "k += l is " << (k += l) << endl;
  
    // Subtract and Assignment Operator
    cout << "k -= l is " << (k -= l) << endl;
  
    //  Multiply and Assignment Operator
    cout << "k *= l is " << (k *= l) << endl;
  
    //  Divide and Assignment Operator
    cout << "k /= l is " << (k /= l) << endl;

    //Ternary Operator
     int m = 3, n = 4;

    // Conditional Operator
    int result = (m < n) ? n : m;
    cout << "The greatest number is " << result << endl;


    return 0;
}