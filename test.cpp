#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int c = a;
  cout << c << endl;
  a = b;
  b = c;
  return 0;
}