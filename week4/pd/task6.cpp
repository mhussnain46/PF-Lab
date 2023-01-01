#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printA();
void printW();
void printI();
void printS();

main(){
system("cls");
gotoxy(0,0);
printA();
gotoxy(0,1);
printW();
gotoxy(0,2);
printA();
gotoxy(0,3);
printI();
gotoxy(0,4);
printS();
}

void printA(){
cout << "A";
}
void printW(){
cout << "W";
}

void printI(){
cout << "I";
}
void printS(){
cout << "S";
}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}