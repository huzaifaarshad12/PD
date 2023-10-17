#include<iostream>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays);
main(){
    string month;
    int stays;
    cout <<"Enter the month (May, June, July, August, September, October): ";
    cin >> month;

    cout << "Enter the number of stays: ";
    cin >> stays;

    string output= calculateHotelPrices( month, stays);
    cout << output;
}
string calculateHotelPrices(string month, int numberOfStays){

    float studio,room;
    float quantit;
if(month=="May"||month=="October"){

    quantit=50;
    studio=quantit;
    room=65;

    if(numberOfStays>7 ){

        studio=quantit-quantit*0.05;
    }
        if(numberOfStays>14){

        studio=quantit-quantit*0.3;
        room=room-(room*0.1);
    }
         studio=studio*numberOfStays;
     room=room*numberOfStays; 
}
if(month=="June"||month=="September"){

    quantit=75.20;
    studio=quantit;
    room=68.70;
    if(numberOfStays>14){
        studio=quantit-quantit*0.2;
        room=room-(room*0.1);
    }
         studio=studio*numberOfStays;
     room=room*numberOfStays; 
}
if(month=="July"||month=="August"){

    quantit=76;
    studio=quantit;
    room=77;
    if(numberOfStays>14){
        room=room-(room*0.1);
    }
     studio=studio*numberOfStays;
     room=room*numberOfStays; 
}

    return "Apartment: "+to_string(room)+"$.\nStudio: "+to_string(studio)+"$.";
}