#include <iostream>
using namespace std;
int main()
{
  // set var
  double UserIN, sum;

  while (true)
  {
    cout << "Please insert the total sales from last hour : RM ";
    cin >> UserIN;
    cout << "Total sales : RM " + to_string(sum) << endl;
  }

  return 0;
}