#include <iostream>
using namespace std;
int main()
{
  char UserIN;
  cout << "Please enter a grade: ";
  cin >> UserIN;

  // tentukan grade

  switch (UserIN)
  {
  case 'A':
    cout << "4.0" << endl;
    break;
  case 'a':
    cout << "4.0" << endl;
    break;
  case 'B':
    cout << "2.7" << endl;
    break;
  case 'b':
    cout << "2.7" << endl;
    break;
  case 'C':
    cout << "2.0" << endl;
    break;
  case 'c':
    cout << "2.0" << endl;
    break;
  case 'D':
    cout << "1.0" << endl;
    break;
  case 'd':
    cout << "1.0" << endl;
    break;
  case 'E':
    cout << "0.0" << endl;
    break;
  case 'e':
    cout << "0.0" << endl;
    break;
  default:
    cout << "Please insert the right grade" << endl;
    break;
  }
  return 0;
}