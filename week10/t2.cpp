#include<iostream>
using namespace std;
int num_letter(int size,char letter,string words[]);
main(){
    int size;
    cout<<"Enter how many words you want to enter: ";
    cin>>size;

    string words[size];
    for(int i=0;i<size;i++){

        cout<<"Enter word "<<i+1<<": ";
        cin>> words[i];
    }
    char letter;
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
   
    cout<<letter<<" shows up "<< num_letter(size,letter,words)<<" times in the data.";


}
int num_letter(int size,char letter,string words[]){
    int count=0;
    string result;
    for(int x=0;x<size;x++){

        result =words[x];
        for(int i=0;i<result.length();i++){

            if(result[i]==letter){

                count++;
            }
        }

        }
        return count;   
    }