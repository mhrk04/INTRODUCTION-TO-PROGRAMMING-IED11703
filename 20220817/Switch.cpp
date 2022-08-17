#include <iostream>

using namespace std;

int main(){
  int x =10;
  int y;

  cout<<"Please enter value of Y"<<endl;
  cin >> y;

  switch (y)
  {
  case 1:
    cout<<"number is too small"<<endl;
    break;
  
  case 2:
    cout<<"still too small"<<endl;
    break;

    case 3:
    cout<<"You're getting there"<<endl;
    break;
case 4:
    cout<<"almost there "<<endl;
    break;
case 5:
    cout<<"hah"<<endl;
    break;
case 6:
    cout<<"Oooooo yeah"<<endl;
    break;
case 7:
    cout<<"too much"<<endl;
    break;

  default:
  cout<<"HAAAAAAHAHAHAHAAH"<<endl;
    break;
  }
  cin.get();
}