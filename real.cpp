#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long a;
  cin >> a;

  // Calculate the side length of the square pasture using accurate square root function
  double side = sqrt(double(a));

  // Calculate the total fence length (perimeter of the square)
  double fenceLength = 4 * side;

  // Output the fence length with required precision
  
  cout << fixed << fenceLength << endl;

  return 0;
}
