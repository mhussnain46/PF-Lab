#include <iostream>
#include <windows.h>
using namespace std;

void printMase();
void gotoxy(int x, int y);
void playerMove(int, int);

main()
{
system("cls");
printMase();
int x = 3;
int y = 16;
while(true){
playerMove(x, y);
if(x < 20){
x = x + 1;
   }
if(x == 20){

gotoxy(x-1, y);
cout <<" ";
 x = 3;
   }
 }
}


void playerMove(int x, int y){
gotoxy(x-1, y);
cout << " ";
gotoxy(x, y);
cout << "P";
Sleep(500);
}


void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMase(){
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
cout << "||.. .................................................... ......  ||" << endl;
cout << "||.. ||||||||||||||       ...      ||||||||||||||   |%|..   ||||  ||" << endl;
cout << "||..      |%|   |%|    |%|...      |%|        |%|   |%|..    |%|  ||" << endl;
cout << "||..      |%|   |%|    |%|...      |%|        |%|   |%|..    |%|  ||" << endl;
cout << "||..      ||||||||| .  |%|...      ||||||||||||||      ..   |||.  ||" << endl;
cout << "||..      |%|       .  |%|...      |%|.......       |%|..   |%|.  ||" << endl;
cout << "||..      ||||||||| .  |%|...     |||||||||||       |%|..   |%|.  ||" << endl;
cout << "||..            |%| .             |%|.....          |%|..   |%|.  ||" << endl;
cout << "||..      ..... |%| .             |%|.....|%|            |%|  |%| ||" << endl;
cout << "||..|%| |%|||||%|.|%|. |%|           .....|%|       |%|      .....||" << endl;
cout << "||..|%| |%|   |%|.|%|. |||||||||     .....|%|               .|%|  ||" << endl;
cout << "||..|%| |%|   |%|.|%|.     ..|%|       ||||||              . |%|..||" << endl;
cout << "||..|%| |%|          .     ..|%|                    |%|    ..|%|..||" << endl;
cout << "||..|%| |%|   |||||||     ..|%||||||||||         |%|    ..|%|..   ||" << endl;
cout << "||.........................................         |%|  .........||" << endl;
cout << "||   ......................................                ...... ||" << endl;
cout << "||..|%| |%|   |%|..    |||||||||  .........|%|      |%|   |%|.    ||" << endl;
cout << "||..|%| |%|   |%|..        ..|%|     |||||||||      |%|   |%|.    ||" << endl;
cout << "||..|%|           .    G   ..|%|%%%%%%%%%%%         |%|   |%|.    ||" << endl;
cout << "||..|%| |||||||||          ..|%|%%%%%      ...      |%|   |%|.    ||" << endl;
cout << "||..............................................    |%|   |%|.    ||" << endl;
cout << "||..   .........................................         ......   ||" << endl;
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}