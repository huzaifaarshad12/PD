#include<iostream>
#include<iomanip>
using namespace std;

main(){
    float count;
    float train;
    float bus;
    float truck;
    float add;
    float numb;
    float busprice;
    float truckprice;
    float trainprice;
    float average;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>count;
    
    for(float x=1;x<=count;x=x+1){

        cout<<"Enter the tonnage of cargo "<<x<<": ";
        cin>>numb;
        if(numb<=3){
            bus=bus+numb;
        }
         if(numb>3 && numb<=11) {

            truck=truck+numb;
        }
        if(numb>11){
            train=train+numb;

        }


    }
    add=truck+train+bus;
    
    average=(bus*200+truck*175+train*120)/add;

     busprice=(bus/add)*100;
     truckprice=(truck/add)*100;
     trainprice=(train/add)*100;

    cout<<fixed<<setprecision(2)<< average <<endl;
    cout<<fixed<<setprecision(2)<<busprice <<"%" <<endl;
    cout<<fixed<<setprecision(2)<< truckprice<<"%" <<endl;
    cout<<fixed<<setprecision(2)<< trainprice<< "%"<<endl;
}









