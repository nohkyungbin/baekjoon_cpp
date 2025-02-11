#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v(30);
  int a;

  for(int i = 0; i < 30; i++){
    v[i] = i + 1;
  }

  for(int i = 0; i < 28; i++){
    cin >> a;
    v[a - 1] = 0;
  }

  for(int i = 0; i < 30; i++){
    if(v[i]) cout << v[i] << " ";
  }

  cout << endl;

  return 0;
}
