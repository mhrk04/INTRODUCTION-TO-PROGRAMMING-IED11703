#include <iostream>
using namespace std;
// cout in do bracket will execute once and then check the condition in while colum
int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 5);
  cin.get();
  return 0;
}
