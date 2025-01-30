#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b;
  int k;
  cin >> a >> b;

  for(int i = 0; i < 3; i++){
    k = (b/(int)pow(10, i))%10;
    cout << a*k << endl;
  }

  cout << a*b << endl;
  return 0;
}
//success
