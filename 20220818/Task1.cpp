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
  if (Day == 'U')
  {
    cout<<"It is Sunday today \n";
  }else if (Day == 'M')
  {
  cout<<"It is Monday today \n";
  }else if (Day == 'T')
  {
  cout<<"It is Tuesday today \n";
  }else if (Day == 'W')
  {
  cout<<"It is Wednesday today \n";
  }else if (Day == 'R')
  {
  cout<<"It is Thursday today \n";
  }else if (Day == 'F')
  {
  cout<<"It is Friday today \n";
  }else if (Day == 'S')
  {
  cout<<"It is Saturday today \n";
  }else
  {
    cout<< "Character not valid \n";
  }
  cin.get();

  return 0;
}