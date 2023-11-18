#include<iostream>
using namespace std;
int Volume(int noBox,int dimension[]);
main(){
    int noBox;
    cout<<"Enter the number of boxes: ";
    cin>>noBox;

    int dimension[noBox*3];
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;

    for(int i=0;i<noBox*3;i++){

        cin>>dimension[i];

    }
    int output=  Volume(noBox,dimension);
    cout<<"Total volume of all boxes: "<<output;

}
	int Volume(int noBox,int dimension[]){

	int count=0;
	for(int i=0;i<noBox*3;i+=3){

	 count=count+(dimension[i]*dimension[i+1]*dimension[i+2]);
    

}
return count;   
}