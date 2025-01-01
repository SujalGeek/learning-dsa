#include <iostream>
using namespace std;
//  Sum of factors and print all the factors
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
    }
  }

  return 0;
}
