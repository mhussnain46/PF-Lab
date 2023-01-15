#include <iostream>
using namespace std;

string signTeller(int day, string month);

main()
{
    int day;
    string month;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth: ";
    cin >> month;
    string result = signTeller(day, month);
    cout << result;
}

string signTeller(int day, string month)
{
    string sign;
    if ((month == "march" && day >= 21) && (month == "april" && day <= 19))
    {
        sign = "Aries";
    }
    if ((month == "april" && day >= 20) && (month == "may" && day <= 20))
    {
        sign = "Taurus";
    }
    if ((month == "may" && day >= 21) && (month == "june" && day <= 20))
    {
        sign = "Gemini";
    }
    if ((month == "june" && day >= 21) && (month == "july" && day <= 22))
    {
        sign = "Cancer";
    }
    if ((month == "july" && day >= 23) && (month == "august" && day <= 22))
    {
        sign = "Leo";
    }
    if ((month == "august" && day >= 23) && (month == "september" && day <= 22))
    {
        sign = "Virgo";
    }
    if ((month == "september" && day >= 23) && (month == "october" && day <= 22))
    {
        sign = "Libra";
    }
    if ((month == "october" && day >= 23) && (month == "november" && day <= 21))
    {
        sign = "Scorpio";
    }
    if ((month == "november" && day >= 22) && (month == "december" && day <= 21))
    {
        sign = "Sagittarius";
    }
    if ((month == "december" && day >= 22) && (month == "january" && day <= 19))
    {
        sign = "Capricon";
    }
    if ((month == "january" && day >= 20) && (month == "february" && day <= 18))
    {
        sign = "Aquarius";
    }
    if ((month == "february" && day >= 19) && (month == "march" && day <= 20))
    {
        sign = "Pisces";
    }

    return sign;
}