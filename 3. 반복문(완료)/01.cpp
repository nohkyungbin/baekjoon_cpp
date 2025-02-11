#include <iostream>

using namespace std;

void print(int N)
{
  for(int i = 1; i <= 9; i++){
    cout << N << " * " << i << " = " << N * i << endl;
  }
}

int main()
{
  int n;

  cin >> n;

  print(n);

  return 0;
}
//success
