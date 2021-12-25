#include <cassert>
#include <iostream>
#include <vector>

using std::vector;

long long binary_search(const vector<int> &a, int x)
{
  long long left = 0, right = (long long)a.size() - 1;
  //write your code here
  while (left <= right)
  {
    long long mid = left + (right - left) / 2;
    if (a[mid] == x)
      return mid;
    if (a[mid] < x)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return -1;
}

int main()
{
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i)
  {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i)
  {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}
