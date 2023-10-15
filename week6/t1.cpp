#include<iostream>
using namespace std;
string decideActivity(string temperature,string humidity);

main(){
    string temperature;
    string humidity;

    cout<<"Enter temperature (warm or cold): ";
    cin>>temperature;

    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;

    string output= decideActivity(temperature, humidity);
    cout<<"Recommended activity: " <<output;
}

string decideActivity(string temperature,string humidity){ 
    string result;

    if(temperature == "warm" && humidity =="dry"){
        result = "Play tennis";

    }

    if(temperature == "warm" && humidity =="humid"){
        result = "Swim";

    }

    if(temperature == "cold" && humidity =="dry"){
        result = "Play basketball";

    }

    if(temperature == "cold" && humidity =="humid"){
        result = "Watch TV";

    }
        return result;
}
        