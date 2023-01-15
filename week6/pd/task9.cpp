#include <iostream>
#include <windows.h>
using namespace std;

void printMase();
void gotoxy(int x, int y);
void erase(int x, int y);
void printPackman(int x, int y);
char getCharAtxy(short int x, short int y);
void ghostMoveVer(int x, int y);
void ghostMoveHor(int x, int y);

main()
{
    int packmanX = 4;
    int packmanY = 22;
    bool gameRunning = true;
    int x = 3;
    int y = 15;
    int x1 = 32;
    int y1 = 5;

    system("cls");
    printMase();
    printPackman(packmanX, packmanY);

    while (gameRunning)
    {

        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(packmanX - 1, packmanY);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(packmanX, packmanY);
                packmanX = packmanX - 1;
                printPackman(packmanX, packmanY);
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(packmanX + 1, packmanY);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(packmanX, packmanY);
                packmanX = packmanX + 1;
                printPackman(packmanX, packmanY);
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(packmanX, packmanY - 1);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(packmanX, packmanY);
                packmanY = packmanY - 1;
                printPackman(packmanX, packmanY);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(packmanX, packmanY + 1);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(packmanX, packmanY);
                packmanY = packmanY + 1;
                printPackman(packmanX, packmanY);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }

        ghostMoveHor(x, y);
        if (x < 20)
        {
            x = x + 1;
        }
        if (x == 20)
        {

            gotoxy(x - 1, y);
            cout << ".";
            x = 3;
        }

        ghostMoveVer(x1, y1);
        if (y1 < 11)
        {
            y1 = y1 + 1;
        }
        if (y1 == 11)
        {

            gotoxy(x1, y1 - 1);
            cout << " ";
            y1 = 5;
        }

        Sleep(200);
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
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void printPackman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void printMase()
{
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
    cout << "||..|%|           .        ..|%|%%%%%%%%%%%         |%|   |%|.    ||" << endl;
    cout << "||..|%| |||||||||          ..|%|%%%%%      ...      |%|   |%|.    ||" << endl;
    cout << "||..............................................    |%|   |%|.    ||" << endl;
    cout << "||..   .........................................         ......   ||" << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

void ghostMoveHor(int x, int y)
{
    char nextLocation = getCharAtxy(x + 1, y);
    if (nextLocation == '.')
    {
        gotoxy(x - 1, y);
        cout << ".";
    }
    else
    {
        gotoxy(x - 1, y);
        cout << " ";
    }
    gotoxy(x, y);
    cout << "G";
    Sleep(150);
}

void ghostMoveVer(int x, int y)
{
    gotoxy(x, y - 1);
    cout << " ";
    gotoxy(x, y);
    cout << "G";
    Sleep(150);
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}