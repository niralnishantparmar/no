//https://usaco.org/index.php?page=viewproblem2&cpid=807
//to be completely fair this might be quite possibly the simplest one on the internet

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  cout << min({abs(a-x) + abs(y-b), abs(a-y) + abs(x-b), abs(a-b)});
  }
