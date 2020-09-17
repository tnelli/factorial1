
#include <iostream>
unsigned long long Factorial(unsigned long long n)
{
  if (n <= 1)
  return 1;
  return n * Factorial (n-1);
}
int main()
{
  unsigned long long n = 0;
  std::cin >> n;
  unsigned fact = Factorial (n);
  std::cout << fact;
}
