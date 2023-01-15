#include <iostream>
using namespace std;

float priceAppartment(string month, int days);
float priceStudio(string month, int days);

main()
{
    string month;
    int days;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the number of days stayed: ";
    cin >> days;
    float result1 = priceAppartment(month, days);
    float result2 = priceStudio(month, days);
    cout << "Apppartment:  " << result1 << "$" << endl;
    cout << "Studio:  " << result2 << "$";
}

float priceStudio(string month, int days)
{
    float price;
    if ((month == "may" || month == "october") && days > 14)
    {
        price = (0.70 * 50) * days;
    }
    if ((month == "may" || month == "october") && (days < 14 && days > 7))
    {
        price = (0.95 * 50) * days;
    }
    if ((month == "june" || month == "september") && days > 14)
    {
        price = (0.70 * 75.20) * days;
    }
    if ((month == "june" || month == "september") && (days < 14 && days > 7))
    {
        price = (0.95 * 75.20) * days;
    }
    if ((month == "july" || month == "august") && days > 14)
    {
        price = (0.70 * 76) * days;
    }
    if ((month == "july" || month == "august") && (days < 14 && days > 7))
    {
        price = (0.95 * 76) * days;
    }
    return price;
}

float priceAppartment(string month, int days)
{
    float price;
    if ((month == "may" || month == "october") && days > 14)
    {
        price = (65 * 0.90) * days;
    }
    if ((month == "june" || month == "september") && days > 14)
    {
        price = (0.90 * 68.70) * days;
    }
    if ((month == "july" || month == "august") && days > 14)
    {
        price = (0.90 * 77) * days;
    }
    return price;
}