#include <iostream>
using namespace std;
int main()
{
  int UserIN;
  cout << "Please enter your grade point: ";
  cin >> UserIN;

  // tentukan grade

  switch (UserIN)
  {
  case 4:
    cout << "You get A" << endl;
    break;
  case 2:
    break;
  case 1:
    break;
  case 0:
    break;
  default:
    cout << "Please enter the valid grade point" << endl;
    break;
  }
  return 0;
}