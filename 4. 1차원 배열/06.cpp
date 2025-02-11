#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b)
{
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

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
    swap(v[a - 1], v[b - 1]);
  }

  for(int n : v) cout << n << " ";

  return 0;
}
//success
