#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // declaration
    unordered_multiset<int> sample;
  
    // inserts element
    sample.insert(100);
    sample.insert(100);
    sample.insert(100);
    sample.insert(200);
    sample.insert(500);
    sample.insert(500);
    sample.insert(600);
  
    // find the position of 500 and print
    auto it = sample.find(500);
    if (it != sample.end())
        cout << *it << endl;
    else
        cout << "500 not found\n";
  
    // find the position of 300 and print
    it = sample.find(300);
    if (it != sample.end())
        cout << *it << endl;
    else
        cout << "300 not found\n";
  
    // find the position of 100 and print
    it = sample.find(100);
    if (it != sample.end())
        cout << *it << endl;
    else
        cout << "100 not found\n";
  
    return 0;
}
