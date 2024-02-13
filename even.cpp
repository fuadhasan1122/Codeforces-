#include <iostream>
#include <bitset>

using namespace std;

int main()
{
  int N;
  cin >> N;

  while (N--)
  {
    int num;
    cin >> num;

    if (num % 2 == 0)
    {
      // Reverse the binary representation of the even number
      int reversed = 0;
      int original = num;
      while (original > 0)
      {
        reversed = (reversed << 1) | (original & 1);
        original >>= 1;
      }
      cout << reversed << endl;
    }
    else
    {
      // Keep odd numbers as is
      cout << num << endl;
    }
  }

  return 0;
}
