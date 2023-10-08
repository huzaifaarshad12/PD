#include<iostream>
using namespace std;

void header();
void displayMenu();
main(){

header();
displayMenu();



}
void header(){
    cout<<"                *      *****  ****   *      *****  *    *  *****      *     *      *      *    *      *       ****   *****  *     *  *****  *    *  *******"<<endl;
    cout<<"               * *       *    *   *  *        *    **   *  *          * * * *     * *     **   *     * *     *       *      * * * *  *      * *  *     *"<<endl;
    cout<<"              *****      *    ****   *        *    * *  *  *****      *  *  *    *****    * *  *    *****    *  ***  *****  *  *  *  *****  *  * *     *"<<endl;
    cout<<"             *     *     *    * *    *        *    *  * *  *          *     *   *     *   *  * *   *     *   *   **  *      *     *  *      *   **     *"<<endl;
    cout<<"            *       *  *****  *   *  *****  *****  *    *  *****      *     *  *       *  *    *  *       *   *** *  *****  *     *  *****  *    *     *"<<endl;     
    cout<<endl;  
    cout<<"                                                           *****  *    *   *****  *******  *****  *     *"<<endl;
    cout<<"                                                          *        *  *   *          *     *      * * * *"<<endl;
    cout<<"                                                           ****      *     ****      *     *****  *  *  *"<<endl;
    cout<<"                                                               *    *          *     *     *      *     *"<<endl;
    cout<<"                                                          *****    *      *****      *     *****  *     *"<<endl;

}

void displayMenu() { 
    cout << "1. Add Flight"<<endl;
    cout << "2. Display Flights"<<endl;
    cout << "3. Book a Flight"<<endl;
    cout << "4. Display Bookings"<<endl;
    cout << "5. Cancel Booking"<<endl;
    cout << "6. Exit"<<endl;


    int choice;
    int num,seats,time,stay;
    string destin;
    int num1,birth;
    long long id; 
    string name,address,father;

    while(true)
    {
            
            cout<<"Enter your choice: ";
            cin>>choice;
        switch(choice){
                
            case 1:
               { cout<<"Enter flight number: ";
                cin>>num;
                cout<<"Enter Available seats: ";
                cin>>seats;
                cout<<"Enter Flight Timing: ";
                cin>>time;
                cout<<"Enter Destination: ";
                cin>>destin;
                cout<<"Enter Flight stay: ";
                cin>>stay;
                cout<<"Flight Added successfully, Thank You"<<endl;
                }
            break;
                case 2:
                    cout<<"Flight Lists"<<endl;
                {
                    cout<<"Your Flight Number: "<<num<<endl;
                    cout<<"Available Seats: "<<seats<<endl;
                    cout<<"Your Timing: "<<time<<" hour"<<endl;
                    cout<<"Your Destination: "<<destin<<endl;
                    cout<<"Your Flight stay: "<<time<<" hour"<<endl;

                
            }
            break;
                case 3: {
                    
                    
                    cout<<"Enter flight Number: ";
                    cin>>num1;
                    cout<<"Enter your name: ";
                    cin>>name;
                    cout<<"Enter your date of Birth: ";
                    cin>>birth;
                    cout<<"Enter your ID card Number (13-letters): ";
                    cin>>id;
                    cout<<"Enter your Father's Name: ";
                    cin>>father;
                    cout<<"Enter Your Address: ";
                    cin>>address;
                    cout<<"Flight Booking Successful: "<<endl;
                }
                break;
                case 4:
                    cout<<"Booking Details"<<endl;
                    {
                    cout<<"Flight Number: "<<num1<<endl;
                    cout<<"Your name: "<<name<<endl;
                    cout<<"Your date of Birth: "<<birth<<endl;
                    cout<<"Your ID card Number : "<<id<<endl;
                    cout<<"Your Father's Name: "<<father<<endl;
                    cout<<"Your Address: "<<address<<endl;
                  
             }
             break;
            case 5:{
                    cout<<"Booking is cancelled"<<endl;
            }
            break;
            case 6:{
                cout<<"Exiting Program"<<endl;

            }
    
            default:{
                cout << "Invalid choice. Please try again."<<endl;
            break;

            }

        }
    }

}
