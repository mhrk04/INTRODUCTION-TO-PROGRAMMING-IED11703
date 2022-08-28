#include <iostream>
using namespace std;
int main()
{
  // set var
  cout << R"(
     Every hour the cashier is required to update the total sales of the hour 
     to keep track of the cafe's performance.
     (10 am to 10 pm)
    )"
       << "\n";
  double UserIN, sum;
  // 10 am to 10 pm is 12 hour , so user need to input 12 times
  int i = 1;
  while (i <= 12)
  {
    cout << "Please insert the total sales from the last hour : RM ";
    cin >> UserIN;
    sum += UserIN;
    cout << "Total sales : RM " + to_string(sum) << endl;
    i++;
  }
  cout << "Total sales for today : RM " + to_string(sum);
  return 0;
}