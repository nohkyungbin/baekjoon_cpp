#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, m;
  int a, b;
  cin >> n >> m;

  vector<int> v(n);

  for(int i = 0; i < n; i++){
    v[i] = i + 1;
  }

  for(int i = 0; i < m; i++){
    cin >> a >> b;
    reverse(v.begin() + a - 1, v. begin() + b);
  }

  for(int n : v) cout << n << " ";

  return 0;
}
//success
