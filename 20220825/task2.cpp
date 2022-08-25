#include <iostream>

using namespace std;

int main(){
  double userIN,Ans = 19;

  cout<<"Number guessing Game"<<endl;
  cout<<"User Only have 10 try"<<endl;
int i = 1;
  while ( i <=10 )
  {
    cout<<"Please Guess the Number"<<endl;
    cin>>userIN;
    if (userIN == Ans)
    {
      cout<<"Great. That's true. It's "+to_string(Ans)<<endl;
      break;
    }else if (i == 10)
    {
      cout<<"Game Over"<<endl;
    }
    else
    {
      cout<<"Wrong!! Try again!!"<<endl;
    }
    i++;
  }
  
  cout<<"Game End"<<endl;
  return 0;
}