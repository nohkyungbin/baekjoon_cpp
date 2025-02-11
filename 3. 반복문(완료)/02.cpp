#include <iostream>

using namespace std;

void solution(int T)
{
  int a, b;

  for(int i = 0; i < T; i++){
    cin >> a >> b;
    cout << a + b << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  solution(n);
  return 0;
}
//success
