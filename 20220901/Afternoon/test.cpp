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
  return 0;
}