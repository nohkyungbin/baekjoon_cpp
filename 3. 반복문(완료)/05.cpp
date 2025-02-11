#include <iostream>

using namespace std;

void solution(int N)
{
  for(int i = 0; i < N; i += 4){
    cout << "long ";
  }

  cout << "int" << endl;
}

int main()
{
  int n;
  cin >> n;
  solution(n);
  return 0;
}
