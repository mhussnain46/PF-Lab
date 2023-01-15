#include <iostream>
using namespace std;

float costCheck(string city, string product, int quantity);

main()
{
    string city;
    string product;
    int quantity;
    cout << "Enter the name of city: ";
    cin >> city;
    cout << "Enter the name of product: ";
    cin >> product;
    cout << "Enter the quantity: ";
    cin >> quantity;
    float result = costCheck(city, product, quantity);
    cout << "Your bill is " << result;
}

float costCheck(string city, string product, int quantity)
{
    float price;
    if (city == "sofia" && product == "coffee")
    {
        price = 0.50;
    }
    if (city == "plovdiv" && product == "coffee")
    {
        price = 0.40;
    }
    if (city == "varna" && product == "coffee")
    {
        price = 0.45;
    }
    if (city == "sofia" && product == "water")
    {
        price = 0.80;
    }
    if ((city == "plovdiv" || city == "varna") && product == "water")
    {
        price = 0.70;
    }
    if (city == "sofia" && product == "beer")
    {
        price = 1.20;
    }
    if (city == "plovdiv" && product == "beer")
    {
        price = 1.15;
    }
    if (city == "varna" && product == "beer")
    {
        price = 1.10;
    }
    if (city == "sofia" && product == "sweets")
    {
        price = 1.45;
    }
    if (city == "plovdiv" && product == "sweets")
    {
        price = 1.30;
    }
    if (city == "varna" && product == "sweets")
    {
        price = 1.35;
    }
    if (city == "sofia" && product == "peanuts")
    {
        price = 1.60;
    }
    if (city == "plovdiv" && product == "peanuts")
    {
        price = 1.50;
    }
    if (city == "varna" && product == "peanuts")
    {
        price = 1.55;
    }
    price = price * quantity;
    return price;
}