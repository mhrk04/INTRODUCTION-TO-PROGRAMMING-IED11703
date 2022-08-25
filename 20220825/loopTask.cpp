#include <iostream>

using namespace std;

int main(){
  // declare var
  double userIN, sum,avg;
  sum = 0;

for (int i = 1; i <= 10; i++) {
  cout<<to_string(i)+") Insert the Number :"<<endl;
  cin>>userIN;
  sum+=userIN;
}
// show sum of 10 num
cout<<"The sum of the 10 number that user input is "+to_string(sum)<<endl;
// calc avg
avg=sum/10;
cout<<"Average  value for the 10 number is "+ to_string(avg)<<endl;

  return 0;
}