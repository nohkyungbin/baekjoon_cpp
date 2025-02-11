#include <iostream>

using namespace std;

void solution(int a, int b, int i)
{
  cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
}

int main()
{
  int n;
  int a, b;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> a >> b;
    solution(a, b, i+1);
  }

  return 0;
}
//success
