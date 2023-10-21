#include<iostream>
using namespace std;
int add(int number);
main(){
int number;
cout<<"Enter number of Triangle: ";
cin>>number;

int dots= add( number);
cout<<"Dots in the Triangle: "<<dots;

}
int add(int number){
int add=0;

for(int i=1;i<=number; i++){

    add=add+i;


}
return add;



}