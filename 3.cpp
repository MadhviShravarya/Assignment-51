/*write a C++ program to illustrate the swapping of data between two
unordered_multiset*/
#include <iostream>
#include <string>
#include <unordered_set>
  
using namespace std;
  
int main()
{
  
    // sets the values in two container
    unordered_multiset<string>
        first = { "FOR GEEKS" },
        second = { "GEEKS" };
  
    // before swap values
    cout << "before swap :- \n";
  
    cout << "1st container : ";
    for (const string& x : first)
        cout << x << endl;
  
    cout << "2nd container : ";
    for (const string& x : second)
        cout << x << endl;
  
    // call swap
  
    first.swap(second);
  
    // after swap values
    cout << "\nafter swap :- \n";
  
    // displaying 1st container
    cout << "1st container : ";
    for (const string& x : first)
        cout << x << endl;
  
    // displaying 2nd container
    cout << "2nd container : ";
    for (const string& x : second)
        cout << x << endl;
  
    return 0;
}
