#include<iostream>
using namespace std;
void flowershop(float redrose,float whiterose,float tulip);
main(){
	float redrose;		
	float whiterose;
	float tulip;
	cout<<"Red Rose: ";
	cin>>redrose;
	cout<<"White Rose: ";
	cin>>whiterose;
	cout<<"Tulips: ";
	cin>>tulip;
	flowershop(redrose,whiterose,tulip);		
}
void flowershop(float redrose,float whiterose,float tulip){
	float price;
	price=redrose*2+whiterose*4.10+tulip*2.5;
	cout<<"Original price: $"<<price<<endl;
	if (price>200){
	float discount;
	discount=price*0.2;
	discount=price-discount;
	cout<<"Price after Discount: $"<<discount;}
	if(price<=200){
	cout<<"No discount applied.";
}

}







	