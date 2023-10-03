#include<iostream>
using namespace std;
void pet(float holidays);
main(){
	float holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(float holidays){
	int min,totalmins,hour;
	min=((365-holidays)*63)+(holidays*127);
	min=30000-min;
	hour=min/60;
	totalmins=min % 60;

	if((min)>=0)
{	cout<<"Tom sleeps well"<<endl;
	cout<<hour<<" hours and "<<totalmins<<" minutes less for play";
}
	if((min)<0)
{	
	hour=hour*(-1);
	totalmins=totalmins*(-1);
	cout<<"Tom will run away"<<endl;	
	cout<<hour<<" hours and "<<totalmins<<" minutes for play";	
}

}