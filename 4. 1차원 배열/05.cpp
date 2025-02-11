#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, m;
  int a, b, c;

  cin >> n >> m;

  vector<int> v(n, 0);

  for(int i = 0; i < m; i++){
    cin >> a >> b >> c;
    for(int j = a - 1; j < b; j++){
      v[j] = c;
    }
  }

  for(int n : v){
    cout << n << " ";
  }

  return 0;
}
//success
