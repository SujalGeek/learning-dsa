#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // vector using
  vector<int> a;
  a.push_back(2);
  a.push_back(4);
  a.push_back(6);
  a.push_back(5);

  // why emplace back is faster than push back
  vector<int> b;
  b.emplace_back(2);
  b.emplace_back(4);

  vector<int> d(5, 10); // 5 elements with value 10

  // It dynamically increases the size of the vector
  vector<int> c(5);
  c.push_back(2);
  c.emplace_back(4);

  // printed the vector
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }

  // iterator
  // v.begin() is address to the first element
  // v.end() is address to the last element
  // so we use it to iterate through the vector*()

  // vector<int>::iterator it = a.begin();
  // vector<int>::iterator it1 = a.end();
  vector<int>::iterator it1 = a.begin();
  vector<int>::iterator it2 = d.end();
  // r.begin() , r.end() is used to iterate in reverse order
  // vector<int>::reverse_iterator it2 = a.rbegin();
  // vector<int>::reverse_iterator it3 = a.rend();
  cout << "Printing" << endl;
  // cout << *(it) << endl;
  cout << *(it1) << endl;
  cout << *(it2) << endl;
  // cout << *(it3) << endl;
  return 0;
}