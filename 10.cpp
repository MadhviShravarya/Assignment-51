#include <algorithm>  
#include <iostream>  
#include <string>  
  
using namespace std;  
  
int main() {  
  string str = "Hello ";  
  cout << "Before Reverse : "<< str << endl;  
  
  reverse(str.begin(), str.end());  
  cout <<"After Reverse  : " << str << endl;  
    
  return 0;  
}  
