#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // declaration
    unordered_multiset<char> sample;
  
    // inserts element
    sample.insert('a');
    sample.insert('b');
    sample.insert('b');
    sample.insert('b');
    sample.insert('z');
  
    cout << "The total count of buckets: " << sample.bucket_count();
  
    // prints all element bucket wise
    for (int i = 0; i < sample.bucket_count(); i++) {
  
        cout << "\nBucket " << i << ": ";
  
        // if bucket is empty
        if (sample.bucket_size(i) == 0)
            cout << "empty";
  
        for (auto it = sample.cbegin(i); it != sample.cend(i); it++)
            cout << *it << " ";
    }
    return 0;
}
