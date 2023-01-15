#include <iostream>
using namespace std;

int daysCalculated(string year, int holidays, int weekends);

main()
{
    string year;
    int holidays;
    int weekends;
    cout << "Enter is it leap or normal year: ";
    cin >> year;
    cout << "number of holiday in year: ";
    cin >> holidays;
    cout << "Enter the number of weekends he go to home: ";
    cin >> weekends;
    int result = daysCalculated(year, holidays, weekends);
    cout << result - 1;
}

int daysCalculated(string year, int holidays, int weekends)
{
    float days;
    holidays = (holidays * 2) / 3;
    weekends = weekends + 48;
    if (year == "normal")
    {
        days = (3 * weekends) / 4 + holidays;
    }
    if (year == "leap")
    {
        days = (3 * weekends) / 4 + holidays;
        days = days + (0.15 * days);
    }
    return days;
}
