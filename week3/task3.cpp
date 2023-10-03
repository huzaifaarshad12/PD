#include<iostream>
using namespace std;
main(){
	float iv,a,fv;
	int time;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>iv;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>> a;
	cout<<"Enter Time (s): ";
	cin>> time;
	fv = iv + (a*time);
	cout<<"Final Velocity (m/s): "<<fv;
}
