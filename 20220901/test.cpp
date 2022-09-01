#include <iostream>

using namespace std;

int main()
{
  // first question
  // set var
  string Name;
  int Yearofbirth, age;

  cout << "Age Calculator" << endl;
  // insert name
  cout << "Enter Your Name: ";
  getline(cin, Name);

  // insert your birth
  cout << "Enter the year of birth: ";
  cin >> Yearofbirth;

  // calculate
  int currentYear = 2022;
  age = currentYear - Yearofbirth;

  // result
  cout << "==================================================" << endl;
  cout << "Hi " + Name + "," << endl;
  cout << "Your age currently is " + to_string(age) + " years old." << endl;

  // ready for next question
  // question 2
  cout << "-----------------------------" << endl;

  if (Yearofbirth < 1946)
  {
    cout << "Silent Generation" << endl;
  }
  else if (Yearofbirth > 1946 && Yearofbirth < 1964)
  {
    cout << "Baby Boomers" << endl;
  }
  else if (Yearofbirth >= 1965 && Yearofbirth < 1980)
  {
    cout << "Generation X" << endl;
  }
  else if (Yearofbirth > 1981 && Yearofbirth < 1995)
  {
    cout << "Millenials" << endl;
  }
  else if (Yearofbirth > 1996 && Yearofbirth < 2010)
  {
    cout << "Generation Z" << endl;
  }
  else if (Yearofbirth > 2011 && Yearofbirth < 2025)
  {
    cout << "Generation alpha" << endl;
  }

  // questin 3 (switch)
  switch (age)
  {
  case 5:
    cout << "Entering adolescence" << endl;
    break;
  case 13:
    cout << "Welcome to teenage years" << endl;
    break;
  case 18:
    cout << "Congratulations! You're ad adult" << endl;
    break;
  case 40:
    cout << "Entering Matured Adult Years" << endl;
    break;
  case 65:
    cout << "You're now officially a senior citizen" << endl;
    break;
  }
  return 0;
}