#include<iostream>
using namespace std;
float taxCalculator(char type,float price);
main(){
	char type;
	float price;

	cout<<"Enter the vehicle type code (M, E, S, V, T): ";
	cin>>type;

	cout<<"Enter the price of the vehicle: $";	
	cin>>price;	
	
	float output= taxCalculator(type,price);	
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<output;
}
float taxCalculator(char type,float price){

	float final;
	if(type=='M')
        {
	final=price*(0.06)+price;
	cout<<final;
       
	
	}	

	if(type=='E'){
	final=(price*(0.08))+price;
	cout<<final;
	

	}

	if(type=='S'){
	final=(price*(0.1))+price;
	cout<<final;
		
	}

	if(type=='V'){
	final=(price*(0.12))+price;
	cout<<final;
	
	}

	if(type=='T'){
	final=(price*(0.15))+price;
	cout<<final;	
	}
	return final;
}