#include <iostream>
using namespace std;

int main() {
  int arr[5]={10,20,30,40,50};
  int*ptr=&arr[0];
  
  for(int i=4;i>-1;i--){
      cout<<(ptr[i])<<endl;
      
  }

  }

//Output
// 50 40 30 20 10
