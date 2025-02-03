#include <iostream>

using namespace std;

int sum(int N)
{
  int res = 0;

  for(int i = 1; i <= N; i++){
    res = res + i;
  }

  return res;
}

int main()
{
  int n;
  cin >> n;
  cout << sum(n) << endl;
  return 0;
}
//success
