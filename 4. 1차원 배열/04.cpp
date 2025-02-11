#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v(9);
  int max = -1;
  int res;

  for(int i = 0; i < 9; i++){
    cin >> v[i];
  }

  for(int i = 0; i < 9; i++){
    if(v[i] > max){
      max = v[i];
      res = i + 1;
    }
  }

  cout << max << " " << res << endl;

  return 0;
}
//success
