#include<iostream>
using namespace std;

int amplify(int numb);
main(){
int numb;

cout<<"Enter the number to Amplify: ";
cin>>numb;

amplify(numb);

}
int amplify(int numb){

for(int x=1;x<=numb;x++){
    int y=x;
    if(y%4==0){
        y=y*10;
    }
    cout<<y;
    
    if(x<numb){
        cout<<", ";

    }



}
}