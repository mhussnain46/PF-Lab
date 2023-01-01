#include <iostream>
using namespace std;


void maximum(int number1,  int number2);
void minimum(int number1,  int number2);
void isEqual(int number1, int number2);

main()
{
int choice;
int number1;
int number2;
while(true)
  {
cout << "Enter number 1: ";
cin >> number1;
cout << "Enter number 2: ";
cin >> number2;
cout << "Enter choice(1-3): ";
cin >> choice;

if(choice == 1)
  {
maximum(number1, number2);
  }
if(choice == 2)
  {
minimum(number1, number2);
  }
if(choice == 3)
  {
isEqual(number1, number2);
  }
 }
}

void maximum(int number1,  int number2)
{
if(number1 > number2)
  {
cout << "Greater number is " << number1 << endl;
  }
if(number1 < number2)
  {
cout << "Greater number is " << number2 << endl;
  }
}

void minimum(int number1,  int number2)
{
if(number1 < number2)
  {
cout << "Minimum number is " << number1 << endl;
  }
if(number1 > number2)
  {
cout << "Minimum number is " << number2 << endl;
  }
}

void isEqual(int number1, int number2)
{
if(number1 = number2)
  {
cout << "Both numbers are equal "  << endl;
  }
if(number1 != number2)
  {
cout << "Both numbers are not equal "  << endl;
  }
}