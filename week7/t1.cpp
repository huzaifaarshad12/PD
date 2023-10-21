#include<iostream>
using namespace std;

void printStars(int rowsize);
main(){

int rowsize;
cout<<"Enter desired number of rows: ";
cin>>rowsize;
printStars( rowsize);


}
void printStars(int rowsize){

for(int row=rowsize;row>=0;row=row-1)
{
    for(int col=1;col<=row;col=col+1){

        cout<<"*";
    }
    cout<<endl;
}
}



