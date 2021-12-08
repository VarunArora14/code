#include "iostream"
using namespace std;

// recursive program for fibonacci finding
int fib(int n)
{
  if (n <= 2)
    return 1;
  return fib(n - 1) + fib(n - 2);
}
/*
In the tree of fibonacci sequence we can see the base case 1,2 returning 1 and other cases branching out to fib(n-1) and fib(n-2) as recursive functions
*/

int main()
{
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  cout << fib(6) << " " << fib(7) << " " << fib(8);
}