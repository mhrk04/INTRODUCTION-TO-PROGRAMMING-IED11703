#include <iostream>
using namespace std;

// solve  S = (A + B + C) / Y
int main(){
cout<< R"(
#     #    #    ####### ###  #####     ######  ####### #     #    #    ### #######    #    #     # 
#     #   # #        #   #  #     #    #     # #     # #     #   # #    #       #    # #   ##    # 
#     #  #   #      #    #  #     #    #     # #     # #     #  #   #   #      #    #   #  # #   # 
####### #     #    #     #  #     #    ######  #     # ####### #     #  #     #    #     # #  #  # 
#     # #######   #      #  #   # #    #   #   #     # #     # #######  #    #     ####### #   # # 
#     # #     #  #       #  #    #     #    #  #     # #     # #     #  #   #      #     # #    ## 
#     # #     # ####### ###  #### #    #     # ####### #     # #     # ### ####### #     # #     # 
                                                                                                   
   #######  #####    #     ###    #####   #####   #####   #####    ###    #####   #####  
   #       #     #  ##    #   #  #     # #     # #     # #     #  #   #  #     # #     # 
   #             # # #   #     #       #       #       #       # #     # #       #     # 
   ######   #####    #   #     #  #####   #####   #####   #####  #     # ######   #####  
         # #         #   #     #       #       # #       #       #     # #     # #     # 
   #     # #         #    #   #  #     # #     # #       #        #   #  #     # #     # 
    #####  ####### #####   ###    #####   #####  ####### #######   ###    #####   #####  
                                                                                         

)"<<"\n";


  
  double A,B,C,Y,S;
  Y = 3.0;
  // prompt for input number
  cout<<"Masukkan Nilai A : \n Nombor Sahaja"<<endl;
  cin>>A;
  // cout<<A<<endl;
  cout<<"Masukkan Nilai B :"<<endl;
  cin>>B;
  // cout<<B<<endl;
  cout<<"Masukkan Nilai C :"<<endl;
  cin>>C;
  // cout<<C<<endl;
  S=(A+B+C)/Y;

  cout<<"Hasil kira ("+to_string(A)+"+"+to_string(B)+"+"+to_string(C)+") /"+to_string(Y)+"="+to_string(S)<<endl;

  return 0;
}