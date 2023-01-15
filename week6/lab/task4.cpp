#include <iostream>
using namespace std;

float totalIncome(string screen, int rows, int columns);

main()
{
    string screen;
    int rows;
    int colums;
    cout << "Enter the name of screening: ";
    cin >> screen;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> colums;
    float result = totalIncome(screen, rows, colums);
    cout << "Total collected amount is " << result;
}

float totalIncome(string screen, int rows, int columns)
{
    int totalSeats = rows * columns;
    float totalAmount;
    if (screen == "premiere")
    {
        totalAmount = 12.00 * totalSeats;
    }
    if (screen == "normal")
    {
        totalAmount = 7.50 * totalSeats;
    }
    if (screen == "discount")
    {
        totalAmount = 5.00 * totalSeats;
    }
    return totalAmount;
}