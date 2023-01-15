#include <iostream>
using namespace std;

string speedTeller(float speed);

main()
{
    float speed;
    cout << "Enter the speed: ";
    cin >> speed;
    string result = speedTeller(speed);
    cout << "You are " << result;
}

string speedTeller(float speed)
{
    string velocity;
    if (speed <= 10)
    {
        velocity = "slow";
    }
    if (speed > 10 && speed <= 50)
    {
        velocity = "aveage";
    }
    if (speed > 50 && speed <= 150)
    {
        velocity = "fast";
    }
    if (speed > 150 && speed <= 1000)
    {
        velocity = "ultra fast";
    }
    if (speed > 1000)
    {
        velocity = "extremely fast";
    }
    return velocity;
}