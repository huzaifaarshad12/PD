#include<iostream>
using namespace std;
void tpchecker(int,int);
main(){
	int people;
	int tp;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpchecker(people,tp);
}
void tpchecker(int people,int tp)
{	int day;
	day=((tp*500)/(people*57));
	if(day<14)
{	cout<<"Your TP will only last "<<day<< " days, buy more!";

}	
	if(day>=14){
	cout<<"Your TP will last "<<day<<" days, no need to panic!";

}

}
