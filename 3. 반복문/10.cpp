#include <iostream>

using namespace std;

void solution(int n)
{
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < n - i; j++){
      cout << " ";
    }
    for(int j = 0; j < i; j++){
      cout << "*";
    }
    cout << endl;
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
