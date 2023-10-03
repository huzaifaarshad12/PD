#include<iostream>
using namespace std;
void ticket(string name,float price,float discount,float finalpriceafter);
main(){
	string name;
	float price;
	float discount;
	float finalpriceafter; 
	cout<<"Enter the country's name: ";
	cin>>name;
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;
	ticket(name,price,discount,finalpriceafter);

}
void ticket(string name,float price,float discount,float finalpriceafter){
	if(name=="Pakistan")
{	discount=0.05*price;
	finalpriceafter=price-discount;
	cout<<"Final ticket price after discount: $"<<finalpriceafter;
}	
	if(name=="Ireland")
{	discount=0.1*price;
	finalpriceafter=price-discount;
	cout<<"Final ticket price after discount: $"<<finalpriceafter;
}
	if(name=="India")
{	discount=0.2*price;
	finalpriceafter=price-discount;
	cout<<"Final ticket price after discount: $"<<finalpriceafter;
}	
	if(name=="England")
{	discount=0.3*price;
	finalpriceafter=price-discount;
	cout<<"Final ticket price after discount: $"<<finalpriceafter;
}	
	if(name=="Canada")
{	discount=0.45*price;
	finalpriceafter=price-discount;
	cout<<"Final ticket price after discount: $"<<finalpriceafter;
}				
}

	




