#include <iostream>

using namespace std;


void myFunct(string fname){
  cout<<fname<<", welcome to C++ tutorial"<<endl;
}

int main(){
string name;
cout<<"Please enter your name"<<endl;
cin>>name;
myFunct(name);

return 0;

}