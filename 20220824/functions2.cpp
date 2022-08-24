#include <iostream>

using namespace std;


void myFunct(int fnum1,int fnum2){
  int sum = fnum1 + fnum2;
  cout<<"The sum of two number is "+ to_string(sum)<<endl;
}

int main(){
int num1,num2;
cout<<"Please enter your first number"<<endl;
cin>>num1;
cout<<"Please enter your Second number"<<endl;
cin>>num2;
myFunct(num1,num2);

return 0;

}