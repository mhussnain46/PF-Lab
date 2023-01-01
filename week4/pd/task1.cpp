#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
main(){
system("cls");
cout << "test" << endl;
gotoxy(4, 4);
cout << "My name is Hussnain" << endl;
}



void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}