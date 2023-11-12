#include<iostream>
using namespace std;
bool isLengthEven(string word);

bool isLengthEven(string word)
{
if(word.length()%2 ==0){
    cout<<"1";
}
else{
    cout<<"0"; 
}
return 0;
}
 main(){
    string word;
    cout<<"Enter a String: ";
    cin>>word;
    isLengthEven(word); 
 
}