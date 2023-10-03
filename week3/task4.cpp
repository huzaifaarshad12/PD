#include<iostream>
using namespace std;
main(){
	float ic,pc,imposter;
	cout<<"Enter Imposter Count: ";
	cin>>ic;
	cout<<"Enter Player Count: ";
	cin>>pc;
	imposter=100*(ic/pc);
	cout<<"Chance of being an imposter: "<<imposter<<"%";
}