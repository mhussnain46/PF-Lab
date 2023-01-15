#include <iostream>
using namespace std;

void timeTeller(int hours1, int minutes1, int hours2, int minutes2);

main()
{
    int hours1;
    int minutes1;
    int hours2;
    int minutes2;
    cout << "Enter exam starting time(hours):  ";
    cin >> hours1;
    cout << "Enter exam starting time(minutes): ";
    cin >> minutes1;
    cout << "Enter the student hours of arrival: ";
    cin >> hours2;
    cout << "Enter the student minutes of arrival: ";
    cin >> minutes2;
    timeTeller(hours1, minutes1, hours2, minutes2);
}

void timeTeller(int hours1, int minutes1, int hours2, int minutes2)
{
    int hour;
    float time1 = hours1 * 60 + minutes1;
    float time2 = hours2 * 60 + minutes2;
    if (time1 < time2)
    {
        hour = time2 - time1;
        if (hour >= 60)
        {
            cout << "You are " << hour / 60 << " hour(s) and " << hour % 60 << " minutes late";
        }
        else
        {
            cout << "You are " << hour << " minutes late";
        }
    }
    if (time1 == time2)
    {
        cout << "You are on time";
    }
    if (time1 > time2)
    {
        hour = time1 - time2;
        if (hour >= 60)
        {
            cout << "You are " << hour / 60 << " hour(s) and " << hour % 60 << " minutes early";
        }
        else if (hour <= 30)
        {
            cout << "On time" << endl
                 << hour
                 << " minutes before exam";
        }

        else
        {
            cout << "You are " << hour << " minutes early";
        }
    }
}