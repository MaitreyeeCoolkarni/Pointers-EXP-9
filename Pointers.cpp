// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int a = 20;
   bool c1 = '0';  // '0' is ASCII 48, which is non-zero, so treated as true (1)
   float b = 10.2;
   string str1 = "Hello";

   int* ptr = &a;
   cout << ptr << "int initial" << endl;
   ptr++;
   cout << ptr << "int final" << endl;

   bool* ptr1 = &c1;
   cout << ptr1 << " bool initial" << endl;
   ptr1++;
   cout << ptr1++ << "  bool final " << endl;

   float* ptr2 = &b;
   cout << ptr2 << endl << " float intial" << endl;
   ptr2++;
   cout << ptr2 << endl << " float final" << endl;

   string* ptr3 = &str1;
   cout << ptr3 << "  Strring initial" << endl;
   ptr3++;
   cout << ptr3 << " string final";
}

//* 
// 0x7fff164a5ef0int initial
// 0x7fff164a5ef4int final
// 0x7fff164a5eef bool initial
// 0x7fff164a5ef0  bool final 
// 0x7fff164a5ee8
//  float intial
// 0x7fff164a5eec
//  float final
// 0x7fff164a5ec0  Strring initial
// 0x7fff164a5ee0 string final
