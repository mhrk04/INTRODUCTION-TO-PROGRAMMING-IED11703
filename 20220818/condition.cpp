
#include <iostream>

using namespace std;

int
main ()
{
  int x,y ;
  cout<<"Enter the Number for X"<<endl;
  cin >> x;
  cout<<"Enter the Number for Y"<<endl;
  cin >> y;
  
  if (x > y)
    {
      cout << to_string(x)+" is greater than "+to_string(y)<<endl;
    }else if (x<y){
        cout<<to_string(x)+" is less than "+to_string(y)<<endl;
    }else{
        cout<<to_string(x)+" equal "+to_string(y)<<endl;
    }

  return 0;
}
