#include <iostream>
using namespace std;

float priceTeller(string fruit, string day, float quantity);

main()
{
    string fruit;
    string day;
    float quantity;
    cout << "Enter the name of  the fruit: ";
    cin >> fruit;
    cout << "Enter the name of the day: ";
    cin >> day;
    cout << "Enter the quantity of fruit: ";
    cin >> quantity;
    // if (day != "monday" && day != "tuesday" && day != "wednesday" && day != "thursday" && day != "friday" && day != "saturday" && day != "sunday")
    // {
    //     cout << "Error";
    //     return 0;
    // }
    // if (fruit != "banana" && fruit != "apple" && fruit != "orange " && fruit != "grapefruit" && fruit != "kiwi" && fruit != "pineapple" && fruit != "grapes")
    // {
    //     cout << "Error";
    //     return 0;
    // }
    float result = priceTeller(fruit, day, quantity);
    cout << "Total bill is " << result;
}

float priceTeller(string fruit, string day, float quantity)
{
    float price;
    if (day == "sunday" && fruit == "banana")
    {
        price = 2.70;
    }
    if (day == "sunday" && fruit == "apple")
    {
        price = 1.25;
    }
    if (day == "sunday" && fruit == "orange")
    {
        price = 0.90;
    }
    if (day == "sunday" && fruit == "grapefruit")
    {
        price = 1.60;
    }
    if (day == "sunday" && fruit == "kiwi")
    {
        price = 3.00;
    }
    if (day == "sunday" && fruit == "pineapple")
    {
        price = 5.60;
    }
    if (day == "sunday" && fruit == "grapes")
    {
        price = 4.20;
    }

    if (day != "sunday" && fruit == "banana")
    {
        price = 2.50;
    }
    if (day != "sunday" && fruit == "apple")
    {
        price = 1.20;
    }
    if (day != "sunday" && fruit == "orange")
    {
        price = 0.85;
    }
    if (day != "sunday" && fruit == "grapefruit")
    {
        price = 1.45;
    }
    if (day != "sunday" && fruit == "kiwi")
    {
        price = 2.70;
    }
    if (day != "sunday" && fruit == "pineapple")
    {
        price = 5.50;
    }
    if (day != "sunday" && fruit == "grapes")
    {
        price = 3.85;
    }
    price = price * quantity;
    return price;
}