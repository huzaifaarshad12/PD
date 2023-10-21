#include<iostream>
using namespace std;
bool isPrime(int numb);
int Promirals(int);

main(){

int numb;
cout<<"Enter Number: ";
cin>>numb;
cout<<Promirals(numb);


}
int Promirals(int numb){
    int counts=0;
    int mul=1;
    for(int i=1;counts<=numb;i++){
        int y=isPrime(i);
        if(y== 1){
            mul=mul*i;
            counts++;

        }
    }
return mul;

}
bool isPrime(int numb){
if(numb==2 || numb==3){

    return true;

}
else if(numb!=2 && numb!=3){
    if(numb%2==0 || numb%3==0){
        return false;
    }
    else {
        return true;
    }
}
}