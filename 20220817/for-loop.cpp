#include <iostream>

using namespace std;
// for loop
int main(){
  int i;
  for ( i = 1; i <= 10; i++)
  {
    cout<<"Welcome to the class"<<endl;
    // to_string is to convert int to string
    cout<<"Round "+to_string(i)<<endl;
  }
  cin.get();
  return 0;
}