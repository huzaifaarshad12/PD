#include<iostream>
using namespace std;
int progress_days(int num_Sat,int mile[]);
main(){
	int num_Sat;
	cout<<"Enter the number of Saturdays: ";
	cin>>num_Sat;

	int mile[num_Sat];
	for(int i=0;i<num_Sat;i++){

	cout<<"Enter miles run for Saturday "<<i+1<<": ";
    	cin>>mile[num_Sat];


}
    int output= progress_days( num_Sat, mile);
    cout<<"Total progress days: "<<output;


}
int progress_days(int num_Sat,int mile[]){

    int P_days=0;
    for(int i=0;i<num_Sat-1;i++){

        if(mile[i+1]>mile[i]){
            P_days++;
        }
    }
    return P_days;

}








