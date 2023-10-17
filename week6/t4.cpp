#include<iostream>
using namespace std;

string types(char type);
float amountDue(char time,float minute,char type);

main(){
    char typed,time;
    float minute;

    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>typed;

    if(typed =='p'||typed=='P'||typed=='R'||typed=='r'){

    if(typed=='p'|| typed=='P'){

    cout << "Enter time of the call (D/d for day, N/n for night): ";
    cin >> time;

    }

    cout<< "Enter the number of minutes used: ";
    cin>> minute;
    string typoo = types(typed);
    float amountDued = amountDue(time,minute,typed);

    cout<<"Service Type: "<<typoo<<endl;
    cout<<"Total Minutes Used: "<< minute<<" minutes"<< endl;
    cout<<"Amount Due: $"<< amountDued;
    }

    else{

        cout<<"Enter valid character" <<endl;
    }
}
string types(char types){

    string resul;

    if(types=='R'|| types=='r'){
    resul="Regular";
    }

    if(types=='P'|| types=='p'){
    resul="Premium";
    }

    return resul;
}
float amountDue(char time,float minute ,char type){
    float mint= minute;

    if(type=='R'|| type=='r'){
        if(mint>50){
            
            mint=mint-50;
            mint=mint*0.2;
            mint =mint+10;
        }
        else{
            mint=10;
        }
    }
    if(type=='P'|| type=='p'){
        if(time=='D'|| time=='d'){
        if(mint>75){
            mint=mint-75;
            mint =mint*0.1;
            mint=mint+25;
        }
        else{
            mint=25;
        }
}
       if(time=='N'|| time=='n'){
        if(mint>100){

                mint =mint-100;
                mint=mint*0.05;
                mint=mint+25;
        }
          else{

         mint=25;
        }
}

}

return mint;

}