#include <iostream>

using namespace std;

void fastSum(int T)
{
  int a, b;

  for(int i = 0; i < T; i++){
    cin >> a >> b;
    cout << a + b << "\n";
  }
}

int main()
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  fastSum(n);
  return 0;
}
//success
