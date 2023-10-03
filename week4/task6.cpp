#include<iostream>
using namespace std;
void number(int hour, int min);
main(){
	int hour;
	int min;
	cout<<"Enter the number of hours: ";
	cin>>hour;
	cout<<"Enter the number of minutes: ";
	cin>>min;
	number(hour,min);
}
void number(int hour, int min){
	if(hour*60>min)
{
	cout<<hour;
}
	if(min>hour*60)
{	
	cout<<min;
}
}







