#include <iostream>

using namespace std;

void sum(int T)
{
  int a, b;

  for(int i = 1; i <= T; i++){
    cin >> a >> b;
    cout << "Case #" << i << ": " << a + b << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  sum(n);
  return 0;
}
//success
