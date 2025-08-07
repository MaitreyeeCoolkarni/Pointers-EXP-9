#include <iostream>
using namespace std;

int main() {
  int arr[5]={10,20,30,40,50};
  
  int* ptr=&arr[4];
  
  int* ptr1=&arr[2];
  
  int diff=(*ptr)-(*ptr1);
  
  int add=(*ptr)+(*ptr1);
  
  cout<<add<<" Addition"<<endl;
  
  cout<<diff<<" Subtraction";
  }

//Output
//80 Addition
//20 Subtraction
