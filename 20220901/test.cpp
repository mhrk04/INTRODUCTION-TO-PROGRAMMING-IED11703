#include <iostream>

using namespace std;

int main()
{
  // first question
  string Name;
  int Yearofbirth;

  cout << "Age Calculator" << endl;
  // insert name
  cout << "Enter Your Name: ";
  getline(cin, Name);

  // insert your birth
  cout << "Enter the year of birth: ";
  cin >> Yearofbirth;

  // calculate
  int currentYear = 2022;
  int age = currentYear - Yearofbirth;

  // result
  cout << "==================================================" << endl;
  cout << "Hi " + Name + "," << endl;
  cout << "Your age currently is " + to_string(age) + " years old." << endl;
  return 0;
}