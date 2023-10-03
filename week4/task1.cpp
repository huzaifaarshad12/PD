#include<iostream>
using namespace std;
void num(float x,float y);
main(){
	float x;
	float y;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	num(x,y);
}
void num(float x,float y)
{
	if(x==y)
{
	cout<<"true";
}
	if(x!=y)
{
	cout<<"false";
}
}		