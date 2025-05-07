#include <iostream>
using namespace std;
int main() {
  int a, b;
  string ans = "No";
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (i % 100 == 0) {
      ans = "Yes";
    }
  }
  cout << ans <<endl;
}