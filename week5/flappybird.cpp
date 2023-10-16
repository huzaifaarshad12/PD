#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printEnemy();
void eraseEnemy();
void moveEnemy();
void printMaze();
void movePlayerRight();
void movePlayerLeft();
char getCharAtxy(short int x, short int y);
void erasePlayer();
void printPlayer();

int eX = 2, eY = 2;
int pX =6, pY = 12;
int score;
main()

{
	system("cls");
	printMaze();
	printEnemy();
	printPlayer();

while(true)
{   gotoxy(50,25);
    cout<<"Score: "<<score;

        if (GetAsyncKeyState(VK_LEFT))
{       
        movePlayerLeft();
}
        if (GetAsyncKeyState(VK_RIGHT))
{
        movePlayerRight();
}

moveEnemy();
Sleep(200);

}

}

    
 void printMaze(){
    cout<<"##########################################################"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;               
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"#                   *****        *   *                   #"<<endl;
    cout<<"#                                *   *                   #"<<endl;
    cout<<"#                                *   *                   #"<<endl;
    cout<<"#                                *   *                   #"<<endl;
    cout<<"#                                *****                   #"<<endl;
    cout<<"#                                                        #"<<endl;
    cout<<"#                  *                                     #"<<endl;
    cout<<"#                      *                                 #"<<endl;
    cout<<"#                                                        #"<<endl;
    cout<<"#                                *****                   #"<<endl;
    cout<<"#                                *   *                   #"<<endl;
    cout<<"#                   *****        *   *                   #"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"#                   *   *        *   *                   #"<<endl;
    cout<<"##########################################################"<<endl;
 
}
void printEnemy()
{
    gotoxy(eX,eY);
    cout << "  _";

    gotoxy(eX,eY+1);
    cout << " / \\";

    gotoxy(eX,eY+2);
    cout << "|<_>|";



    
}
    
void eraseEnemy(){

    gotoxy(eX,eY);
    cout << "           ";
    gotoxy(eX,eY+1);
    cout << "           ";
    gotoxy(eX,eY+2);
    cout << "           ";
    gotoxy(eX,eY+3);
    cout << "           ";

}
    void moveEnemy()
{
    static bool move=true;
    eraseEnemy();
    if(move){

    eX =eX +1;
    if(eX == 10)
    {
        move=false;
    }
    }
    if(!move){
        eX=eX-1;
        if(eX==2){
            move=true;
        }
    }
    printEnemy();
         
}
	void erasePlayer(){
	gotoxy(pX,pY);
	cout<<"             ";
	gotoxy(pX,pY+1);
	cout<<"             ";


}
void printPlayer(){
    
    gotoxy(pX,pY);
    cout<<"\\  /";
    gotoxy(pX,pY+1);
    cout<<" \\/ ";
    
}

void movePlayerLeft() {
    if (getCharAtxy(pX - 1, pY) == ' ')
{
    erasePlayer();
    pX = pX - 1;
    printPlayer();
    if(pX==1){

     movePlayerRight();   
    }
}


}

void movePlayerRight() {
if (getCharAtxy(pX + 1, pY) == ' ')
{
    erasePlayer();
    pX = pX + 1;
    printPlayer();
    if(pX==40)
    {
        movePlayerLeft();
    }
}
    if(getCharAtxy(pX + 25,pY)=='*'||getCharAtxy(pX + 25,pY+6)=='*'||
    getCharAtxy(pX + 25,pY+5)=='*'||getCharAtxy(pX + 25,pY+4)=='*'||
    getCharAtxy(pX + 25,pY+3)=='*'||getCharAtxy(pX + 25,pY+2)=='*')
{

    erasePlayer();
    score=score +1;
    pX=pX+2;
    printPlayer();
}

}

    char getCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
	: ' ';
}
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

            
    
