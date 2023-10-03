#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}void gotoxy1(int x1,int y1){
	COORD coordinates;
	coordinates.X = x1;
	coordinates.Y = y1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}void gotoxy2(int x2,int y2){
	COORD coordinates;
	coordinates.X = x2;
	coordinates.Y = y2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}void gotoxy3(int x3,int y3){
	COORD coordinates;
	coordinates.X = x3;
	coordinates.Y = y3;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}void gotoxy4(int x4,int y4){
	COORD coordinates;
	coordinates.X = x4;
	coordinates.Y = y4;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}void gotoxy5(int x5,int y5){
	COORD coordinates;
	coordinates.X = x5;
	coordinates.Y = y5;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main(){
	system("cls");
	gotoxy(40,12);
	cout<<"T";
	gotoxy1(40,13);
	cout<<"A";
	gotoxy2(40,14);
	cout<<"L";
	gotoxy3(40,15);
	cout<<"H";
	gotoxy4(40,16);
	cout<<"A";
	gotoxy5(40,17);
	cout<<"A";
}
