#include<iostream>
using namespace std;

 int main(){
    string sentence;
    cout<<"Enter a string: ";
    getline(cin,sentence);
    
    string array[10];
    string letter;
    int count=0;

    for(int i=0; i<=sentence.length();i++){

        if(sentence[i] ==' ' || sentence[i] =='\0'){
            
            array[count]=letter;
            count++;
            letter= "";
            continue;

        }

        letter+= sentence[i];
    }

    cout<<"Reversed string: ";

    for(int j=count;j>=0;j--){
        cout<< array[j];

        if(j>0){
            cout<<" ";
        }
    }
    

return 0;
 }