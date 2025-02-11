#include <iostream>

using namespace std;

void print_sum(int a, int b)
{
  cout << a + b << endl;
}

int main()
{
  int a, b;

  while(cin >> a >> b){
    print_sum(a, b);
  }

  return 0;
}
//success
