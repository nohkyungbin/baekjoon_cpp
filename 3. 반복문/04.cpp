#include <iostream>

using namespace std;

bool solution(int X, int N)
{
  int a, b;

  for(int i = 0; i < N; i++){
    cin >> a >> b;
    X -= a * b;
  }

  return X;
}

int main()
{
  int x, n;

  cin >> x >> n;

  if(solution(x, n)) cout << "No" << endl;
  else cout << "Yes" << endl;

  return 0;
}
//success
