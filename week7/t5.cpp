#include<iostream>
using namespace std;
bool isPrime(int numb);
main(){

int numb;
cout<<"Enter Number: ";
cin>>numb;
cout<< isPrime( numb);

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