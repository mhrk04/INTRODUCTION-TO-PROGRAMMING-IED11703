#include <iostream>

using namespace std;

int main()
{
  string Name;
  int Yearofbirth;

  cout << "Age Calculation App" << endl;

  cout << "Enter Your Name: ";
  getline(cin, Name);

  cout << "Enter the year of birth: ";
  cin >> Yearofbirth;
  int CurrentYear = 2022;
  int age = CurrentYear - Yearofbirth;
  cout << "==================================================" << endl;
  cout << "Hi " + Name + "," << endl;
  cout << "Your age currently is " + to_string(age) + " years old." << endl;
}