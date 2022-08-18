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
  if (Day == 'U'||Day =='u')
  {
    cout<<"It is Sunday today \n";
  }else if (Day == 'M'||Day == 'm')
  {
  cout<<"It is Monday today \n";
  }else if (Day == 'T'||Day == 't')
  {
  cout<<"It is Tuesday today \n";
  }else if (Day == 'W'||Day == 'w')
  {
  cout<<"It is Wednesday today \n";
  }else if (Day == 'R'||Day == 'r')
  {
  cout<<"It is Thursday today \n";
  }else if (Day == 'F'||Day == 'f')
  {
  cout<<"It is Friday today \n";
  }else if (Day == 'S'||Day == 's')
  {
  cout<<"It is Saturday today \n";
  }else
  {
    cout<< "Character not valid \n";
  }
  cin.get();

  return 0;
}