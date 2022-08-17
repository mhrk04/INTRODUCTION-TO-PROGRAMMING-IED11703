#include <iostream>
using namespace std;
// learn if...else
// else if

int main(){
  int x,y;
  cout << "Please enter value of X"<<endl ;
  cin>>x;
  cout << "Please enter value of Y"<<endl ;
  cin>>y;

  if (x>y)
  {
    cout << "X is greater than Y"<<endl ;
  }
  else if(x<y)
  {
    cout << "X is less than Y"<<endl ;
  }
  else
  {
    cout << "X is equal to Y"<<endl ;
  }
  cin.get();
}