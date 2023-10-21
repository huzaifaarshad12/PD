#include<iostream>
using namespace std;
void printupper(int row);
void printlower(int row);

main(){

int row;
cout<<"Enter desired number of rows: ";
cin>>row;
printupper(row);
printlower(row);

}
void printupper(int row){
row /= 2;
for(int i=1;i<=row;i++)
{
    for(int j=1;j<=row-i;j++){

        cout<<" ";
    }
    for(int counts=1; counts<=i; counts++){

        cout<<"*";
    }
    cout<< endl;
}
}
void printlower(int row){
row/=2;
for(int i=row; i>0; i--)
{
    for(int count =i; count<row ; count++){

        cout<<" ";
    }
    for(int j=1; j<=i; j++){

        cout<<"*";
    }
    
    cout<<endl;
}
}


