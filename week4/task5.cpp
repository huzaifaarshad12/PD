#include<iostream>
using namespace std;
void position(float num1,float num2);
main(){
	float num1;
	float num2;
	cout<<"Enter your position: ";
	cin>>num1;
	cout<<"Enter your friend's position: ";
	cin>>num2;
	position(num1,num2);
	}
void position(float num1,float num2)
{
	if(num1+6>num2)
{
	cout<<"true";
}
	if(num1+6<num2)
{
	cout<<"false";
}

}		
	
	
	
	
	
	
