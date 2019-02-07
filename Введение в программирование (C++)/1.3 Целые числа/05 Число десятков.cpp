#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  cout << ((N - (N%10))/10)%10;
  return 0;
}
