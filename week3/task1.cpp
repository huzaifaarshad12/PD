#include<iostream>
using namespace std;
main(){
	int sides;
	int degrees;
	cout<<"Enter the number of sides of the polygon: ";
	cin>>sides;
	degrees=(sides -2)*180;
	cout<<"The sum of internal angles of a "<<sides<<"-sided polygon is: "<<degrees<<" degrees";
}