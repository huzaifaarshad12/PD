#include<iostream>
using namespace std;
main(){
	float size,cost,area,costp,costs;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>size;
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	costp=cost/size;
	costs=cost/area;
	cout<<"Cost of fertilizer per pound: $"<<costp<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<costs;
}	