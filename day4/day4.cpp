// #include <iostream>
// using namespace std;

// int main()
// {
//   int a = 5432;
//   int count = 0;
//   while (a > 0)
//   {
//     count++;
//     // cout << count << " ";
//     a = a / 10;
//   }
//   cout << count << " ";
//   return 0;
// }

#include <iostream>
using namespace std;

int arr[10];
int number = 456;
int count = 0;
void mycalc(int digit)
{
  for (int i = 0; i <= number; i++)
  {
    arr[i] = digit;
  }
  for (int i = 0; i <= number; i++)
  {
    arr[i] = arr[i] + arr[i + 1];
  }
}
int main()
{

  while (number)
  {
    int lastgit = number % 10;
    mycalc(lastgit);
    number = number / 10;
  }

  return 0;
}