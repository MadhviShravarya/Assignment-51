#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // declaration
    unordered_multiset<char> sample;
  
    // inserts element
    sample.insert('a');
    sample.insert('b');
  
    cout << "The size is: " << sample.size();
    cout << "\nThe bucket_count is: " << sample.bucket_count();
    cout << "\nThe load_factor is: " << sample.load_factor();
  
    sample.insert('b');
    sample.insert('b');
  
    cout << "\n\nThe size is: " << sample.size();
    cout << "\nThe bucket_count is: " << sample.bucket_count();
    cout << "\nThe load_factor is: " << sample.load_factor();
  
    sample.insert('z');
  
    cout << "\n\nThe size is: " << sample.size();
    cout << "\nThe bucket_count is: " << sample.bucket_count();
    cout << "\nThe load_factor is: " << sample.load_factor();
  
    return 0;
}
