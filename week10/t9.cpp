#include<iostream>
using namespace std;

int special(int length, int element[]);
main(){
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;

    int element[length];
    cout<<"Enter the elements of the array: "<<endl;

    for(int i=0; i<length; i++){
        cin>>element[i];
    }
    int output=special(length,  element);

             cout<<"Special value: "<<output;
}

int special(int length, int element[]){

    
    for(int j= 0; j<=length; j++){

        int result=0;
        for(int k=0 ; k < length ; k++){

            if(element[k] >=j)
            {
                result++;

            }

        }
        if(result == j)
        {
            return j;
            
        }

    }
    return -1;
}