#include <iostream>
using namespace std;

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

// Average speed 

// set variable
double DistanceTraveled;
double TimeTaken;
double AvgSpd;

cout<<"Average speed Calculator (KM/H)"<<endl;
// get distance traveled
cout<<"Please Insert Distance Traveled in (KM) "<<endl;
cin>>DistanceTraveled;
// get time
cout<<"Please Insert Time Taken in HOUR "<<endl;
cin>>TimeTaken;

// calculate
AvgSpd=DistanceTraveled/TimeTaken;
// show all value that user input
cout<<"The Value that you keyin :"<<endl;
cout<<"Distance Traveled : "+to_string(DistanceTraveled)+" KM"<<endl;
cout<<"Time Taken : "+to_string(TimeTaken)+" Hour"<<endl;
// Print result
cout<<"Average speed = "+to_string(AvgSpd)+" KM/H"<<endl;
  return 0;
}