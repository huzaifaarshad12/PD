#include<iostream>
using namespace std;
main(){
	int age,moves,totalhouse;
	float years;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>moves;
	totalhouse=moves+1;
        years=age/totalhouse;
	cout<<"Average number of years lived in the same house: "<<years;
}
	