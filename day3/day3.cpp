#include <iostream>
using namespace std;
// Starting recusrion
void function(int n);
int count = 0;
void function(int n)
{
  count++;
  if (count == 4)
    return;
  else
  {
    cout << count << " ";
    cout << n << " ";
    function(n - 1);
  }
}
int main()
{
  int n = 10;
  function(10);
  return 0;
}