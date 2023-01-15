#include <iostream>
using namespace std;

string play(string temperature, string humidity);

main()
{
    string temperature;
    string humidity;
    cout << "Enter the temperature (cold or warm): ";
    cin >> temperature;
    cout << "Enter the humidity (dry or humid): ";
    cin >> humidity;
    string result = play(temperature, humidity);
    cout << result;
}

string play(string temperature, string humidity)
{
    string result;
    if (temperature == "warm" && humidity == "dry")
    {
        result = "You can play tennis";
    }
    if (temperature == "warm" && humidity == "humid")
    {
        result = "You can swin";
    }
    if (temperature == "cold" && humidity == "dry")
    {
        result = "You can play basketball";
    }
    if (temperature == "warm" && humidity == "humid")
    {
        result = "You can watch t.v ";
    }
    return result;
}