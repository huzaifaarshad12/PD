#include<iostream>
using namespace std;
main(){
	float vegetable,fruit,totalrpss;
	float totalkgvegetable;
	float totalkgfruit,totalrps;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegetable;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruit;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>totalkgvegetable;
	cout<<"Enter total kilograms of fruits: ";
	cin>>totalkgfruit;
	totalrps=(vegetable*totalkgvegetable)+(fruit*totalkgfruit);
	totalrpss=totalrps/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<totalrpss;
}
	