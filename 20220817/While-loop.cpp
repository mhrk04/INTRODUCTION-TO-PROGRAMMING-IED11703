#include <iostream>
using namespace std;

int main() {
  int i = 1;
  while (i <= 5) {
    cout<<"Welcome to the class"<<endl;
    // to_string is to convert int to string
    cout<<"Round "+to_string(i)<<endl;
    i++;
  }
  cin.get();
  return 0;
}
