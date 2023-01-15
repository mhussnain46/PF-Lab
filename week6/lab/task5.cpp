#include <iostream>
using namespace std;

float lowestPrice(int distance, string time);

main()
{
    int distance;
    string time;
    cout << "Enter the distance you want to covered: ";
    cin >> distance;
    cout << "Enter the time (day or night): ";
    cin >> time;
    float result = lowestPrice(distance, time);
    cout << "Your fare is " << result << " Euro";
}

float lowestPrice(int distance, string time)
{
    float price;
    if (distance < 20 && time == "day")
    {
        price = distance * 0.79;
    }
    if (distance < 20 && time == "night")
    {
        price = distance * 0.90;
    }
    if (distance >= 20 && distance < 100 && (time == "day" || time == "night"))
    {
        price = distance * 0.09;
    }
    if (distance > 100 && (time == "night" || time == "day"))
    {
        price = distance * 0.06;
    }
    return price;
}