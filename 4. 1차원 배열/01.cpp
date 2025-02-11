#include <iostream>
#include <vector>

using namespace std;

int solution(int n, vector<int> v, int target)
{
  int answer = 0;

  for(int i = 0; i < n; i++){
    if(v[i] == target) answer++;
  }

  return answer;
}

int main()
{
  int n, target;
  cin >> n;
  vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  cin >> target;

  cout << solution(n, v, target) << endl;

  return 0;
}
//success
