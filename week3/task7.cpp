#include<iostream>
using namespace std;
main(){
	string name;
	float adulttp,amount,donation,remaining;
	float childtp;
	float adulttpsold;
	float childtpsold;
	float charity;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>adulttp;
	cout<<"Enter the child ticket price: $";
	cin>>childtp;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adulttpsold;
	cout<<"Enter the number of child tickets sold: ";
	cin>>childtpsold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>charity;
	cout<<endl;
	cout<<"Movie: "<<name<<endl;
	amount=adulttp*adulttpsold+childtp*childtpsold;
	cout<<"Total amount generated from ticket sales: $"<<amount<<endl;
	donation=amount/charity;
	cout<<"Donation to charity (10%): $"<<donation<<endl;
	remaining=amount-donation;
	cout<<"Remaining amount after donation: $"<<remaining<<endl;
}	
	