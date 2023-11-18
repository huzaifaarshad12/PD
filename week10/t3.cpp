#include<iostream>
using namespace std;
int isRepeatingCycle(int array,int element[],int cycle);
main(){
    int array;
    cout<<"Enter the length of the array: ";
    cin>>array;

    int element[array];
    cout<<"Enter the elements of the array: "<<endl;

    for(int i=0;i<array;i++){
        
        cin>>element[i];

    }
    int cycle;
    cout<<"Enter the length of the cycle: ";
    cin>>cycle;

    int output=isRepeatingCycle(array, element,cycle);
    cout<<"Output: "<<output;

}

int isRepeatingCycle(int array,int element[],int cycle){
    bool check=false;
    for(int i=0;i<cycle;i++){

        if(cycle>array){
            check=true;

        }
        else if(element[i]==element[cycle+i]){
            check=true;
        }
    }
    return check;




}