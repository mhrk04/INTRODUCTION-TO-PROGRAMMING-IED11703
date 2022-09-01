#include <iostream>
using namespace std;
int main()
{
  char UserIN;
  cout << "Grade: A, B, C, D, E" << endl;
  cout << "Please enter your grade: ";
  cin >> UserIN;

  // tentukan grade

  switch (UserIN)
  {
  case 'A':
    cout << "Your grade point is 4.0" << endl;
    break;
  case 'a':
    cout << "Your grade point is 4.0" << endl;
    break;
  case 'B':
    cout << "Your grade point is 2.7" << endl;
    break;
  case 'b':
    cout << "Your grade point is 2.7" << endl;
    break;
  case 'C':
    cout << "Your grade point is 2.0" << endl;
    break;
  case 'c':
    cout << "Your grade point is 2.0" << endl;
    break;
  case 'D':
    cout << "Your grade point is 1.0" << endl;
    break;
  case 'd':
    cout << "Your grade point is 1.0" << endl;
    break;
  case 'E':
    cout << "Your grade point is 0.0" << endl;
    break;
  case 'e':
    cout << "Your grade point is 0.0" << endl;
    break;
  default:
    cout << "Please insert the right grade" << endl;
    break;
  }
  return 0;
}