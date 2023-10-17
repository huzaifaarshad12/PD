#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayofWeek, double quantit);

main()
{
    string fruit;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    
    string dayofWeek;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>dayofWeek;

    double quantit;
    cout<<"Enter the quantit: ";
    cin>>quantit;
    
    float costs;
    costs =calculateFruitPrice(fruit, dayofWeek, quantit);

    if(costs != 0)
    cout << costs;
}

float calculateFruitPrice(string fruit, string dayofWeek, double quantit)
{
    float costs;
    
    if (dayofWeek=="Sunday" ||  dayofWeek=="Saturday")
    {
    if(fruit=="banana"){

        costs=quantit*2.70;
        return costs;
    }

    else if(fruit=="apple"){

        costs=quantit *1.25;
        return costs;
            }

        else if(fruit=="orange"){

        costs = quantit* 0.90;
        return costs;
        }

        else if(fruit=="grapefruit"){

        costs = quantit *1.60;
        return costs;
        }

        else if(fruit == "kiwi"){

        costs=quantit *3.00;
        return costs;

        }

        else if(fruit == "pineapple"){

        costs = quantit * 5.60;
        return costs;

        }

        else if(fruit == "grapes"){

        costs = quantit * 4.20;
        return costs;

            }
        
        else {

            cout <<"error"; 
            return 0;}

    }

    else if  (dayofWeek=="Monday" || dayofWeek== "Tuesday" || dayofWeek== "Wednesday" || dayofWeek== "Thursday" || dayofWeek== "Friday" )
    {
        if(fruit == "banana"){

        costs = quantit * 2.50;
        return costs;

    }

        else if(fruit== "apple"){

        costs= quantit * 1.20;
        return costs;

    }

        else if(fruit== "orange"){

        costs =quantit* 0.85;
        return costs;


    }

        else if(fruit =="grapefruit"){

         costs = quantit *1.45;
        return costs;

    }

        else if(fruit == "kiwi"){

        costs = quantit *2.70;
        return costs;

    }

        else if(fruit == "pineapple"){

        costs = quantit *5.50;
        return costs;

     }
        else if(fruit == "grapes"){

        costs = quantit * 3.85;
        return costs;

            }
        else 
           { cout<< "error";
            return 0; 
            
            }   
    }

    	else
     {  cout<< "error";
        return 0;}
    
}
    