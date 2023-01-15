#include <iostream>
using namespace std;

void budgetCalculator(float budget, string category, int people);

main()
{
    float budget;
    string category;
    int people;
    cout << "Enter your budget: ";
    cin >> budget;
    cout << "Enter the category: ";
    cin >> category;
    cout << "Enter the number of people: ";
    cin >> people;
    budgetCalculator(budget, category, people);
}

void budgetCalculator(float budget, string category, int people)
{
    float price;
    if (people >= 1 && people <= 4)
    {
        price = budget - (0.75 * budget);
    }
    else if (people >= 5 && people <= 9)
    {
        price = budget - (0.60 * budget);
    }
    else if (people >= 10 && people <= 24)
    {
        price = budget - (0.50 * budget);
    }
    else if (people >= 25 && people <= 49)
    {
        price = budget - (0.40 * budget);
    }
    else if (people > 50)
    {
        price = budget - (0.25 * budget);
    }
    if (category == "vip" && price > (499.99 * people))
    {
        price = price - (499.99 * people);
        cout << "Yes you have " << price << " QR left";
    }
    else if (category == "vip" && price < (499.99 * people))
    {
        price = (499.99 * people) - price;
        cout << "Not enough money! You need " << price << " QR left";
    }
     if (category == "normal" && price > (249.99 * people))
    {
        price = price - (249.99 * people);
        cout << "Yes you have " << price << " QR left";
    }
    else if (category == "normal" && price < (249.99 * people))
    {
        price = (249.99 * people) - price;
        cout << "Not enough money! You need " << price << " QR left";
    }
}