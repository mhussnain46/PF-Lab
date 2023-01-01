#include <iostream>
using namespace std;


void calculateBill(string day, int amount);

main()
{
string day;
int amount;
cout << "Enter the name of day: ";
cin >> day;
cout << "Enter the amount: ";
cin >> amount;
calculateBill(day, amount);
}

void calculateBill(string day, int amount)
{
if(day != "sunday")
  {
cout << "Total Bill is " << amount - 0.05 * amount ;
  }
if(day == "sunday")
  {
cout << "Your Bill is: "<< amount - 0.1 * amount;
  }
}