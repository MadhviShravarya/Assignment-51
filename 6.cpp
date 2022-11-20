#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // declaration
    unordered_multiset<int> sample;
  
    // inserts element using emplace()
    sample.emplace(11);
    sample.emplace(11);
    sample.emplace(11);
    sample.emplace(12);
    sample.emplace(13);
    sample.emplace(13);
    sample.emplace(14);
  
    cout << "Elements: ";
  
    for (auto it = sample.begin(); it != sample.end(); it++)
        cout << *it << " ";
    return 0;
}
