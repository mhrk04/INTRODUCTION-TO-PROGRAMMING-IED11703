#include <iostream>

using namespace std;

int main()
{
  int i = 1;
  int no_of_guess = 3;
  int userguess = 0;
  int answer = 15;

  while ((i <= no_of_guess) && (userguess != answer))
  {
    cout << "Please enter your guess\n";
    cin >> userguess;
    i++;
  }
  if (userguess == answer)

  {
    cout << "\ncongratulation! you guess correctly";
  }
  else

  {
    cout << "\nI'm sorry, Please try harder next time ";
    return 0;
  }
