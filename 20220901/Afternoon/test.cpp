#include <iostream>

using namespace std;

int main()
{
  // Question 1
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
  // question 2
  cout << "-----------------------------------------------------" << endl;

  if (age < 5)
  {
    cout << "You're still a toddler" << endl;
  }
  else if (age >= 5 && age <= 12)
  {
    cout << "Kids should have plenty of playtime" << endl;
  }
  else if (age >= 13 && age <= 17)
  {
    cout << "Teen years are rebellious" << endl;
  }
  else if (age >= 18 && age <= 39)
  {
    cout << "Welcome to adulthood" << endl;
  }
  else if (age >= 40 && age <= 60)
  {
    cout << "You are now matured adult" << endl;
  }
  else if (age > 60)
  {
    cout << "Enjoy your golden years" << endl;
  }

  // question 3
  // Wait for next question
  // switch case
  cout << "============================================" << endl;
  switch (Yearofbirth) // var yearofbirth may differ from your var
  {
  case 1945:
    cout << "End of WW2" << endl;
    break;
  case 1989:
    cout << "The fall of USSR" << endl;
    break;
  case 1998:
    cout << "Asian financial crisis" << endl;
    break;
  case 2000:
    cout << "Dotcom bubble" << endl;
    break;
  case 2008:
    cout << "Subprime mortgage crisis" << endl;
    break;
  }

  // question 4
  // wait.......

  int i = 10;
  while (i > -1)
  {
    cout << "(" + to_string(i) + ")" << endl;
    i--;
  }
  cout << "Terminated" << endl;

  // done for test in 01/09/2022
  return 0;
}