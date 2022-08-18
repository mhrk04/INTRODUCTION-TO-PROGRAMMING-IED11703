#include <iostream>

using namespace std;

int main(){
  char Day;
  cout<< R"(
    U = Sunday
    M = Monday
    T = Tuesday
    W = Wednesday
    R = Thursday
    F = Friday
    S = Saturday

    Please enter the day according character above:
  )"<<endl;

  cin>>Day;

  switch(Day)
   {
    case 'U':
       cout<<"Today is Sunday";
       break;

       case 'u':
       cout<<"Today is sunday";
       break;

       case 'M':
       cout<<"Today is Monday";
       break;
       
       case 'm':
       cout<<"Today is Monday";
       break;
   
       case 'T':
       cout<<"Today is Tuesday";
       break;
       
       case 't':
       cout<<"Today is Tueasday";
       break;
       
       case 'W':
       cout<<"Today is Wednesday";
       break;
       
       case 'w':
       cout<<"Today is wednesday";
       break;

       case 'R':
       cout<<"Today is Thursday";
       break;
       
       case 'r':
       cout<<"Today is thursday";
       break;

       case 'F':
       cout<<"Today is Friday";
       break;
       
       case 'f':
       cout<<"Today is friday";
       break;

       case 'S':
       cout<<"Today is Saturday";
       break;
       
       case 's':
       cout<<"Today is saturday";
       break;
       default:
        cout<<"Character Not Valid \n";
   }
}