#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> v;
  int a;

  for(int i = 0; i < 10; i++){
    cin >> a;
    v.push_back(a%42);
  }

  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  cout << v.size() << endl;

  return 0;
}
//success
