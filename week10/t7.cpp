#include<iostream>
using namespace std;
bool arrange(int length,int element[]);

int main(){
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;

    int element[length];
    cout<<"Enter the elements of the array: "<<endl;

    for(int i=0 ; i<length;i++){
        cin>>element[i];

    }

    bool result= arrange(length, element);
    cout<<"Can be arranged: "<<result;

}
bool arrange(int length,int element[]){

    int smallnum;
    int num;
    for(int i=0 ;i<length;i++)
    {   
        smallnum=i;

        for(int j=i;j<length;j++){

            if(element[smallnum]>element[j]){
                smallnum=j;

            }
            
        }
        
        num=element[smallnum];
        element[smallnum]=element[i];
        element[i]=num;

    }
    bool output=false;
    for(int k=0 ; k < length-1 ;k++){

        if(element[k]+1 == element[k+1] ){

            output=true;

        }
        else{

            output=false;


        }

    }
    return output;

}