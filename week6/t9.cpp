#include <iostream>
#include <string>

using namespace std;

string checkPointPosition(int hiet, int x, int y);

main() {
    int hiet, x, y;
    cout <<"Enter height: ";
    cin>>hiet;

    cout<< "Enter x coordinate: ";
    cin>>x;

    cout<<"Enter y coordinate: ";
    cin>>y;

    string output = checkPointPosition(hiet, x, y);
    cout<<output;
}

string checkPointPosition(int hiet, int x, int y) {
    bool Whatborder=(x>=0 && x<=3 * hiet && (y == 0 || y == hiet)) ||
    (y>=0 && y<=4 * hiet && (x == 0 || x == 2 * hiet)) ||(x == hiet && y>= hiet && y<=3 * hiet);

    if (Whatborder){
     return "Border";

    } else if (x>0 && x<2 * hiet && y>0 && y<4 * hiet) {
     return "Inside";

    }
	 else {
    return "Outside";

    }
}
