#include <iostream>
#include <math.h>
using namespace std;
// Reducing the time complexity of print of all the divisors
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
      if (n / i != i)
      {
        cout << (n / i) << endl;
      }
    }
  }
  return 0;
}