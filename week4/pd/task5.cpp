#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printName();

main(){
system("cls");
printName();
}

void printName(){
gotoxy(15,10);
cout << "***         ***      ***           ***           ***********      ****           ***         *****          *********     ****           *** " <<endl;
gotoxy(15,11);
cout << "***         ***      ***           ***          *                 *** **         ***      ****   ****          ***        *** **         *** " <<endl;
gotoxy(15,12);
cout << "***         ***      ***           ***         **                 ***  ***       ***     *****   *****         ***        ***  ***       *** " <<endl;
gotoxy(15,13);
cout << "***         ***      ***           ***         **                 ***   ***      ***    ******   ******        ***        ***   ***      *** " <<endl;
gotoxy(15,14);
cout << "***************      ***           ***          ***********       ***    ***     ***   *****************       ***        ***    ***     *** " <<endl;
gotoxy(15,15);
cout << "***************      ***           ***                     *      ***     ***    ***   *****************       ***        ***     ***    *** " <<endl;
gotoxy(15,16);
cout << "***         ***      ***           ***                    **      ***      ***   ***   ***           ***       ***        ***      ***   *** " <<endl;
gotoxy(15,17);
cout << "***         ***      ***           ***                    **      ***       ***  ***   ***           ***       ***        ***       ***  *** " <<endl;
gotoxy(15,18);
cout << "***         ***      *****************         *************      ***        *******   ***           ***    *********     ***        ******* " <<endl;

}




void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}