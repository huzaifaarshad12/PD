#include<iostream>
using namespace std;
float pyramidVolume(float length,float width,float height,string unit);
main(){
	float length;
	float width;
	float height;
	string unit;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>>length;

	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>width;

	cout<<"Enter the height of the pyramid (in meters): ";
	cin>>height;

	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>>unit;
	
	float output = pyramidVolume(length,width,height,unit);
	cout<<"The volume of the pyramid is: "<<to_string(output)<<" cubic "<<unit;
	
}
float pyramidVolume(float length,float width,float height,string unit){
	float unit1;
	unit1=length*width*height;
	unit1=unit1/3;
	if(unit=="centimeters")
	{
		unit1=unit1*(100*100*100);
		
	}
	if(unit=="kilometers")
	{
		unit1=unit1/(1000*1000*1000);
	

	}
	if(unit=="millimeters")
	{
		unit1=unit1*(1000*1000*1000);
		
	}
	return unit1;
	}