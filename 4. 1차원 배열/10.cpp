#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  double sum = 0.0;
  cin >> n;
  vector<double> v(n);
  int max = -1;

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  for(int i = 0; i < n; i++){
    if(v[i] > max) max = v[i];
  }

  for(int i = 0; i < n; i++){
    v[i] = (v[i] / max) * 100;
    sum += v[i];
  }

  cout << (double)sum / n << endl;

  return 0;
}
//success
