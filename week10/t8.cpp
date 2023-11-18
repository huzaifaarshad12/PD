#include<iostream>
using namespace std;

int rotation(int length,string element[]);
int main(){
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;

    string element[length];
    cout<<"Enter the elements of the array ("
    << "\"left\"" <<" or "<<"\"right\""
    <<"): "<<endl;

    for(int i=0; i<length; i++){
        cin>>element[i];
        
    }   
    int output=rotation( length, element);
    cout<<"Number of full rotations: "<<output;

}
int rotation(int length,string element[]){
    int result=0;
    int n1=0;
    int n2=0;
    for(int i=0; i<length;i++){

        if(element[i] == "Right" || element[i] == "right" ){

            n1++;

        }
        else if(element[i] == "Left" || element[i] == "left"){

            n2++;

        }
    }
    result=(n1 * 90 - n2 * 90) ;
    result=result/360;
    return result;
}
