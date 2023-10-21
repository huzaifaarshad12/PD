#include<iostream>
using namespace std;
int patient(int);
 int notreat ;
main(){

    int numday;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>numday;

    cout<<"Treated Patients: "<< patient(numday)<<endl;
    cout<<"Untreated Patients: "<<notreat;


}
int patient(int days ){
    int x=0;
    int day=7;
    int treatment =0;

for(int i=1;i<=days;i++){
    cout<<"Number of patients who visited hospital on Day "<<i<<": ";
    cin>>x;
    if(i==3 && notreat>treatment){
        day++;
    }
    if(x<=day){
        treatment=treatment+x;
        
    }
    if(x>day){
        treatment=treatment+day;
        notreat=notreat+(x-day);
    }

}
    
    return treatment;


}