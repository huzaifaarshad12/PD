#include<iostream>
using namespace std;
void ascending(int array[]);
main(){
    int array[10];
    cout<<"Enter the weights of the 10 packages: "<<endl;

    for(int i=0;i<10;i++){

        cin>>array[i];
    }
    ascending(array);

}
void ascending(int array[]){
    int temp;
    for (int x = 0; x < 10; x++){

        for (int i = 0; i < 9; i++){
            
            if (array[i] > array[i+1]){

                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }

    }
    cout <<"Sorted array in ascending order: [";

    for  (int z = 0; z < 10; z++)
    {
        cout << array[z];
        if (z < 9)
        {
            cout <<", ";
        }
    }
    cout << "]";





}
