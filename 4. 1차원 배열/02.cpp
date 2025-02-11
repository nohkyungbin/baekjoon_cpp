#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int n, int x, vector<int> v)
{
  vector<int> answer;

  for(int i = 0; i < n; i++){
    if(v[i] < x) answer.push_back(v[i]);
  }

  return answer;
}

void print_vector(vector<int> arr)
{
  for(int n : arr) cout << n << " ";
  cout << endl;
}

int main()
{
  int n, x;
  vector<int> v(n);

  cin >> n >> x;

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  print_vector(solution(n, x, v));

  return 0;

}
//success
