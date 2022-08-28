#include <iostream>
#include <string>

using namespace std;

int main()
{
  // set variable
  string Name;
  int age;
  double salary;

  // user isi nama
  cout << "Please enter your name : ";
  getline(cin, Name);
  // user isi umur
  cout << "Please enter your age : ";
  // cin.ignore();
  cin >> age;
  // user masukkan gaji
  cout << "Please enter your monthly salary : ";
  cin >> salary;

  // show name,age and categary
  if (salary < 4000)
  {
    cout << Name + ", " + to_string(age) + " years old, you are in B40 category." << endl;
  }
  else if (salary > 4000 && salary < 10000)
  {
    cout << Name + ", " + to_string(age) + " years old, you are in M40 category." << endl;
  }
  else if (salary > 10000)
  {
    cout << Name + ", " + to_string(age) + " years old, you are in T20 category." << endl;
  }
  else
  {
    cout << "Please insert the valid value of your monthly salary" << endl;
  }

  cin.get();
  return 0;
}