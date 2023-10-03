#include<iostream>
using namespace std;
main(){
	int min;
	int fps,tfps;
	cout<<"Number of Minutes: ";
	cin>>min;
	cout<<"Frames per Second: ";
	cin>>fps;
	tfps=fps*60*min;
	cout<<"Total Number of Frames: "<<tfps;
}

