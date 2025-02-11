#include <iostream>

using namespace std;

void print_sum(int a, int b)
{
  cout << a + b << endl;
}

int main()
{
  int a, b;

  while(true){
    cin >> a >> b;
    if(a == 0 && b == 0) break;

    print_sum(a, b);
  }

  return 0;
}
//success
