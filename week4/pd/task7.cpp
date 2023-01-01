#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void playerMove(int, int);
void printMase();

main(){
system("cls");
printMase();
int x = 5;
int y = 5;
while(true){
playerMove(x, y);
if(y < 7){
y = y + 1;
   }
if(y == 7){

 gotoxy(x, y-1);
 cout <<" ";
 y = 5;
   }
 }
}


void playerMove(int x, int y){
gotoxy(x, y);
cout << "P";
gotoxy(x, y-1);
cout << " ";
Sleep(500);
}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMase(){
cout << "############################################" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "############################################" << endl;
}